/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 15:04:10 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/01 16:39:57 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed	d1, d2, d3;
    bool	neg, pos;

    d1 = detectPosPoint(a, b, point);
    d2 = detectPosPoint(b, c, point);
    d3 = detectPosPoint(c, a, point);
    neg = (d1 < 0) && (d2 < 0) && (d3 < 0);
    pos = (d1 > 0) && (d2 > 0) && (d3 > 0);

    return (neg || pos);
}

Fixed detectPosPoint( const Point& a, const Point& b, const Point& p ) 
{
    return (b.getX() - a.getX()) * (p.getY() - a.getY()) - (b.getY() - a.getY()) * (p.getX() - a.getX());
}
