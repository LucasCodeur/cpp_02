/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:33:26 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/01 17:36:08 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

#include <cmath>

Point::Point ( void )
{
	std::cout << "Default constructor called\n";
}

Point::Point ( const float x, const float y )
{
	std::cout << "Float constructor called\n";
	this->x.setRawBits((int)roundf(x * (1 << Fixed::getFractionalNb())));
	this->y.setRawBits((int)roundf(y * (1 << Fixed::getFractionalNb())));
}

Point::Point ( const Point& obj )
{
	std::cout << "Copy constructor called\n";
	*this = obj;
}

Point& Point::operator=( const Point &other )
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
	{
		this->x = other.x;
		this->y = other.y;
	}
	return (*this);
}

Point::~Point ( void )
{
	std::cout << "Destructor called\n";
}

void Point::setLeft( Point* node )
{
	this->left = node;
}

void Point::setRight( Point* node )
{
	this->right = node;
}

Point* Point::getLeft ( void )
{
	return (this->left);
}

Point* Point::getRight ( void )
{
	return (this->right);
}

void	Point::traceLine( Point &other )
{
	this->a = other.getY() - this->getY();
	this->b = this->x - other.x;
	this->c = other.x * this->y - this->x * other.y;
}

Fixed	Point::getX( void )
{
	return (this->x);
}

Fixed	Point::getY( void )
{
	return (this->y);
}
