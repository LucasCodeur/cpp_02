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

// # WARNING: Remettre les consts dans le prototype de fonction bsp

bool bsp( Point& a, Point& b, Point& c, Point& point)
{
	(void)point;
	a.traceLine(b);
	b.traceLine(c);
	c.traceLine(a);
	return (true);
}
