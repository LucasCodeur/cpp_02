/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/10/02 10:24:56 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// # WARNING: have to put x and y private
 
int	main(void)
{
	Point	A( 2,5 );
	Point	B( 7,1 );
	Point	C( 4,8 );
	Point	point( 3,6 );

	if (bsp(A, B, C, point) == true)
		std::cout << "Inside the triangle\n";
	else
		std::cout << "Not inside the triangle\n";
	return (0);
}
