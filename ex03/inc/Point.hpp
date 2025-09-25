/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:27:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/25 18:55:05 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include <iostream>

#include "Fixed.hpp"

class Point
{
	public:
		Point ( void );
		Point ( const float x, const float y );
		Point ( const Point& obj );
		Point& operator=( const Point &other );
		~Point ( void );
		Fixed	x;
		Fixed	y;
	private:
};

#endif
