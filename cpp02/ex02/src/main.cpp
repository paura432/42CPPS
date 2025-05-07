/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:28:27 by pau               #+#    #+#             */
/*   Updated: 2025/05/02 21:34:41 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main(void) {
    // std::cout << "===== CONSTRUCTORES Y ASIGNACIÓN =====" << std::endl;
    // Fixed a;                      // Constructor por defecto
    // Fixed b(10);                  // Constructor con int
    // Fixed c(42.42f);              // Constructor con float
    // Fixed d(b);                   // Constructor de copia
    // Fixed e;
    // e = c;                        // Operador de asignación

    // std::cout << "\n===== CONVERSIONES =====" << std::endl;
    // std::cout << "b como float: " << b.toFloat() << std::endl;
    // std::cout << "c como int: " << c.toInt() << std::endl;
    // std::cout << "c como float: " << c.toFloat() << std::endl;

    // std::cout << "\n===== OPERADORES DE COMPARACIÓN =====" << std::endl;
    // std::cout << "b > c: " << (b > c) << std::endl;
    // std::cout << "b < c: " << (b < c) << std::endl;
    // std::cout << "b >= c: " << (b >= c) << std::endl;
    // std::cout << "b <= c: " << (b <= c) << std::endl;
    // std::cout << "b == d: " << (b == d) << std::endl;
    // std::cout << "b != c: " << (b != c) << std::endl;

    // std::cout << "\n===== OPERADORES ARITMÉTICOS =====" << std::endl;
    // std::cout << "b + c = " << (b + c) << std::endl;
    // std::cout << "c - b = " << (c - b) << std::endl;
    // std::cout << "b * c = " << (b * c) << std::endl;
    // std::cout << "c / b = " << (c / b) << std::endl;

    // std::cout << "\n===== OPERADORES DE INCREMENTO/DECREMENTO =====" << std::endl;
    // Fixed f(1.5f);
    // std::cout << "f inicial: " << f << std::endl;
    
    // std::cout << "++f: " << ++f << std::endl;
    // std::cout << "f después de pre-incremento: " << f << std::endl;
    
    // std::cout << "f++: " << f++ << std::endl;
    // std::cout << "f después de post-incremento: " << f << std::endl;
    
    // std::cout << "--f: " << --f << std::endl;
    // std::cout << "f después de pre-decremento: " << f << std::endl;
    
    // std::cout << "f--: " << f-- << std::endl;
    // std::cout << "f después de post-decremento: " << f << std::endl;

    // std::cout << "\n===== FUNCIONES MIN/MAX =====" << std::endl;
    // std::cout << "min(b, c): " << Fixed::min(b, c) << std::endl;
    // std::cout << "max(b, c): " << Fixed::max(b, c) << std::endl;

    // // Prueba con constantes
    // const Fixed const_b(10);
    // const Fixed const_c(42.42f);
    // std::cout << "min(const_b, const_c): " << Fixed::min(const_b, const_c) << std::endl;
    // std::cout << "max(const_b, const_c): " << Fixed::max(const_b, const_c) << std::endl;

    std::cout << "\n===== PRUEBA DEL EJERCICIO =====" << std::endl;
    Fixed x;
    Fixed const y(Fixed(5.05f) * Fixed(2));
    
    std::cout << x << std::endl;
    std::cout << ++x << std::endl;
    std::cout << x << std::endl;
    std::cout << x++ << std::endl;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << Fixed::max(x, y) << std::endl;

    return 0;
}