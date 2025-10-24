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

#include <iostream>

class	Fixed
{
	public:
		Fixed	( void );
		Fixed	( const Fixed& obj );
		Fixed	( const int nb );
		Fixed	( const float nb );
		~Fixed	( void );

		Fixed&	operator=( const Fixed &other );
		bool	operator>( const Fixed &other ) const;
		bool	operator<( const Fixed &other ) const;
		bool	operator>=( const Fixed &other ) const;
		bool	operator<=( const Fixed &other ) const;
		bool	operator!=( const Fixed &other ) const;
		bool	operator==( const Fixed &other ) const;

		Fixed	operator+( const Fixed &other );
		Fixed	operator-( const Fixed &other );
		Fixed	operator*(Fixed const &rhs) const; 
		Fixed	operator/( const Fixed &other );
		Fixed&	operator++();
		Fixed	operator++( int );
		Fixed&	operator--();
		Fixed	operator--( int );
 
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed& min(Fixed &other, Fixed &other2);
		static const Fixed& min(const Fixed &other, const Fixed &other2);
		static Fixed& max(Fixed &other, Fixed &other2);
		static const Fixed& max(const Fixed &other, const Fixed &other2);
	private:
		static const int fractionalNb = 8;
		int	fixedPointNb;
};

std::ostream& operator<<( std::ostream &os, const Fixed &other );

#endif
