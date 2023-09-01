/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:03:40 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/11 10:59:25 by lheinric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:

		int	pr_nbValue;
		static const int pr_nbBitValue = 8;

	public:

		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(const Fixed &rhs);
		~Fixed( void );

		Fixed& operator=(const Fixed &rhs);

		bool operator>(const Fixed &rhs);
		bool operator<(const Fixed &rhs);
		bool operator>=(const Fixed &rhs);
		bool operator<=(const Fixed &rhs);
		bool operator==(const Fixed &rhs);
		bool operator!=(const Fixed &rhs);

		Fixed operator+(const Fixed &rhs);
		Fixed operator-(const Fixed &rhs);
		Fixed operator*(const Fixed &rhs);
		Fixed operator/(const Fixed &rhs);

		Fixed operator++(int);
		Fixed operator++();
		Fixed operator--(int);
		Fixed operator--();

		static Fixed& min( Fixed &a, Fixed &b );
    	static const Fixed& min( const Fixed &a, const Fixed &b );
    	static Fixed& max( Fixed &a, Fixed &b );
    	static const Fixed& max( const Fixed &a, const Fixed &b );

		
		int	getRawBits( void ) const;
		int	toInt( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif