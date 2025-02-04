/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abamksa <abamksa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:43:23 by abamksa           #+#    #+#             */
/*   Updated: 2025/01/28 09:38:17 by abamksa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed& operator=( Fixed const & newFixed );
		friend std::ostream& operator<<(std::ostream& os, Fixed const& newFixed);
		Fixed( Fixed const& newFixed );
		Fixed( const float& value);
		Fixed( const int& value);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
};

#endif
