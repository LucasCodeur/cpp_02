/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:56:46 by lud-adam          #+#    #+#             */
/*   Updated: 2025/09/16 17:48:19 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class	Fixed
{
	public:
		Fixed( void );
		Fixed( Fixed& obj );
		~Fixed( void );
		Fixed& operator=( const Fixed &other );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		static const int fractionalNb = 8;
		int	fixedPointNb;
};

#endif
