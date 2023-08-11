/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lheinric <lheinric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:03:40 by lheinric          #+#    #+#             */
/*   Updated: 2023/08/11 09:10:32 by lheinric         ###   ########.fr       */
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
		Fixed(const Fixed &rhs);
		Fixed& operator=(const Fixed &rhs);
		~Fixed( void );
		int	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif