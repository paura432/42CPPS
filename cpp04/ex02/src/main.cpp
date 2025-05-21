/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:48:44 by pau               #+#    #+#             */
/*   Updated: 2025/05/21 16:33:28 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "=== Creando instancias individuales de Dog y Cat ===" << std::endl;
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Eliminando instancias individuales..." << std::endl;
    delete j;
    delete i;

    std::cout << "\n=== Creando un array de animales ===" << std::endl;
    const int tamano = 4;
    Animal* animales[tamano];

    for (int k = 0; k < tamano / 2; ++k)
        animales[k] = new Dog();

    for (int k = tamano / 2; k < tamano; ++k)
        animales[k] = new Cat();

    std::cout << "\n=== Eliminando el array de animales ===" << std::endl;
    for (int k = 0; k < tamano; ++k)
        delete animales[k];

    std::cout << "\n=== Probando copia profunda (deep copy) ===" << std::endl;

    Dog perro1;
    perro1.makeSound();

    std::cout << "\nCreando perro2 como copia de perro1 (constructor de copia)..." << std::endl;
    Dog perro2 = perro1;

    std::cout << "\nAsignando perro1 a perro3 (operador de asignación)..." << std::endl;
    Dog perro3;
    perro3 = perro1;

    return 0;
}