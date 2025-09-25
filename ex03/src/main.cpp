/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/25 18:53:53 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// # WARNING: have to put x and y in private
 
int	main(void)
{
	Point	a( 2.10f, 2.15f );
	Point	b( a );
	Point	c;

	c = b;
	std::cout << c.x << " " << c.y << std::endl;
	return (0);
}
