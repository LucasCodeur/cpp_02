/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:27:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/16 16:32:59 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
	public:
		Point	( void );
		~Point	( void );
		Point	( const float x, const float y );
		Point	( const Point& obj );
		Point&	operator=( const Point &other );
		Fixed	getX( void )const;
		Fixed	getY( void )const;
	private:
		Fixed	x;
		Fixed	y;
};

Fixed	detectPosPoint(const Point& a, const Point& b, const Point& p);
bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
