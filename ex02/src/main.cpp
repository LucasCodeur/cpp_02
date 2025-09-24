/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:04:30 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/16 17:48:20 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"
 
int main( void ) 
{
	Fixed a( 42 );
	Fixed b( 42 );
	Fixed c( 42 );

	std::cout << "First test\n";
	if (a > b)
		std::cout << "a is bigger\n";
	else
		std::cout << "a is smaller\n";

	std::cout << "Second test\n";
	if (a < b)
		std::cout << "a is smaller\n";
	else
		std::cout << "a is bigger\n";

	std::cout << "Third test\n";
	if (a >= b)
		std::cout << "a is bigger or equal\n";
	else
		std::cout << "a is smaller or equal\n";

	std::cout << "Fourth test\n";
	if (a <= b)
		std::cout << "a is smaller or equal\n";
	else
		std::cout << "a is bigger or equal\n";

	std::cout << "Fifth test\n";
	if (a == b)
		std::cout << "a is equal to b\n";
	else
		std::cout << "a is not equal to b\n";

	std::cout << "sixth test\n";
	if (a != b)
		std::cout << "a is different to b\n";
	else
		std::cout << "a is not different to b\n";

	std::cout << "seventh test\n";
	a = a - b;
	std::cout << a << "\n";

	std::cout << "eighth test\n";
	c = c + b;
	std::cout << c << "\n";

	std::cout << "nineth test\n";
	c = c * b;
	std::cout << c << "\n";

	std::cout << "tenth test\n";
	c = c / b;
	std::cout << c << "\n";

	std::cout << "eleventh test\n";
	++c;
	std::cout << c << "\n";

	std::cout << "twelfth test\n";
	c++;
	std::cout << c << "\n";

	std::cout << "thirth test\n";
	c--;
	std::cout << c << "\n";

	std::cout << "fourth test\n";
	--c;
	std::cout << c << "\n";

	return 0;
}
