/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 19:26:51 by pau               #+#    #+#             */
/*   Updated: 2025/04/27 14:41:54 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#   include <iostream>

class Fixed {
    private:
    
    int _value;
    static const int _fracint = 8;

    public:
    
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& rhs); 
    ~Fixed();
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
