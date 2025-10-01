/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:33:43 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/16 17:46:13 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
#include <cmath>

Fixed::Fixed ( void )
{
	fixedPointNb = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed ( const Fixed& obj )
{
	std::cout << "Copy constructor called\n";
	*this = obj;
}

Fixed::Fixed ( const int nb )
{
	fixedPointNb = nb * (1 << fractionalNb);
	std::cout << "Int constructor called\n";
}

Fixed::Fixed ( const float nb )
{
	fixedPointNb = (int)((roundf(nb * (1 << fractionalNb))));
	std::cout << "Float constructor called\n";
}

Fixed::~Fixed ( void )
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=( const Fixed &other )
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		fixedPointNb = other.fixedPointNb;
	return (*this);
}

std::ostream& operator<<( std::ostream &os, const Fixed &other )
{
	os << other.toFloat();
	return (os);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedPointNb = raw;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return(this->fixedPointNb);
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->fixedPointNb) / (1 << fractionalNb));
}

int Fixed::toInt( void ) const
{
	return ((int)this->fixedPointNb / (int)(1 << fractionalNb));
}

bool Fixed::operator>( const Fixed &other ) const
{
	return (this->fixedPointNb > other.fixedPointNb);
}

bool Fixed::operator<( const Fixed &other ) const
{
	return (this->fixedPointNb < other.fixedPointNb);
}

bool Fixed::operator>=( const Fixed &other ) const
{
	return (this->fixedPointNb >= other.fixedPointNb);
}

bool Fixed::operator<=( const Fixed &other ) const
{
	return (this->fixedPointNb <= other.fixedPointNb);
}

bool Fixed::operator==( const Fixed &other ) const
{
	return (this->fixedPointNb == other.fixedPointNb);
}

bool Fixed::operator!=( const Fixed &other ) const
{
	return (this->fixedPointNb != other.fixedPointNb);
}

Fixed& Fixed::operator+( const Fixed &other )
{
	fixedPointNb += other.fixedPointNb;
	return (*this);
}

Fixed& Fixed::operator-( const Fixed &other )
{
	fixedPointNb -= other.fixedPointNb;
	return (*this);
}

Fixed Fixed::operator*(Fixed const &other) const 
{
	Fixed		result;
	long long	produit;

	produit = static_cast<long long>(fixedPointNb) * static_cast<long long>(other.getRawBits());
	result.setRawBits(static_cast<int>(produit >> fractionalNb));
	return (result);
}

Fixed& Fixed::operator/( const Fixed &other )
{
	if (other.fixedPointNb == 0)
	{
		std::cout << "Error: Divided by zero\n";
		this->fixedPointNb = 0;
		return (*this);
	}
	this->fixedPointNb /= other.fixedPointNb;
	return (*this);
}

Fixed& Fixed::operator++()
{
	this->fixedPointNb++;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed nb;

	nb = *this;
	this->fixedPointNb++;
	return (nb);
}

Fixed& Fixed::operator--()
{
	this->fixedPointNb--;
	return (*this);
}

Fixed Fixed::operator--( int )
{
	Fixed nb;

	nb = *this;
	this->fixedPointNb--;
	return (nb);
}

Fixed& Fixed::min(Fixed &other, Fixed &other2)
{
	if (other.fixedPointNb < other2.fixedPointNb)
		 return (other);
	return (other2);
}

const Fixed& Fixed::min(const Fixed &other, const Fixed &other2)
{
	if (other.fixedPointNb < other2.fixedPointNb)
		 return (other);
	return (other2);
}

Fixed& Fixed::max(Fixed &other, Fixed &other2)
{
	if (other.fixedPointNb > other2.fixedPointNb)
		 return (other);
	return (other2);
}

const Fixed& Fixed::max(const Fixed &other, const Fixed &other2)
{
	if (other.fixedPointNb > other2.fixedPointNb)
		 return (other);
	return (other2);
}
