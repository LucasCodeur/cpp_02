/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:27:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/01 17:36:09 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

// #WARNING : a b et c en private

class Point
{
	public:
		Point ( void );
		~Point ( void );
		Point ( const float x, const float y );
		Point ( const Point& obj );
		Point&	operator=( const Point &other );
		void	setLeft(Point* node);
		void	setRight(Point* node);
		Point*	getLeft ( void );
		Point*	getRight ( void );
		Fixed	getX( void );	
		Fixed	getY( void );	
		void	traceLine( Point &other );
		Fixed	a;
		Fixed	b;
		Fixed	c;
	private:
		Fixed	x;
		Fixed	y;
		Point*	left;
		Point*	right;
};

bool bsp( Point&  a, Point& b, Point& c, Point& point);

#endif
