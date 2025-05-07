/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:26:51 by pau               #+#    #+#             */
/*   Updated: 2025/04/27 20:15:13 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
    
    int _value;
    static const int _fracint = 8;

    public:
    
    Fixed();
    Fixed(const int value);
    Fixed(const float num);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& rhs); 
    ~Fixed();
    
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
