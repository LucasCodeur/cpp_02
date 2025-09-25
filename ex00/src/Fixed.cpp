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

static const int fractionalNb = 0;

Fixed::Fixed ( void )
{
	fixedPointNb = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed ( Fixed& obj )
{
	fixedPointNb = obj.fixedPointNb;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed (void )
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=( const Fixed &other )
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		fixedPointNb = other.getRawBits();
	return (*this);
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
