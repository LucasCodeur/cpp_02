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

#include <cmath>

Fixed::Fixed ( void )
{
	fixedPointNb = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed ( const Fixed& obj )
{
	std::cout << "Copy constructor called\n";
	if (this != &obj)
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
	return (this->fixedPointNb / static_cast<float>(1 << fractionalNb));
}

int Fixed::toInt( void ) const
{
	return (this->fixedPointNb / (1 << fractionalNb));
}
