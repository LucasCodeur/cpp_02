/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:27:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/02 10:24:26 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

// #WARNING : check what if I have to put private 

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
		Fixed	A;
		Fixed	B;
		Fixed	x;
		Fixed	y;
		Point*	left;
		Point*	right;
	private:
};

bool bsp( Point&  a, Point& b, Point& c, Point& point);

#endif
