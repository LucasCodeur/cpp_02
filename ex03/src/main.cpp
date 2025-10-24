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

int	main(void)
{
	Point	A(5, 0 );
	Point	B(0,0 );
	Point	C(0, 5);
	Point	point(1, 0);

	if (bsp(A, B, C, point) == true)
		std::cout << "Inside the triangle\n";
	else
		std::cout << "Not inside the triangle\n";
	return (0);
}
