/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:48:44 by pau               #+#    #+#             */
/*   Updated: 2025/05/21 16:37:17 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "=== Creando instancias individuales de Dog y Cat ===" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Eliminando Dog y Cat..." << std::endl;
    delete j;
    delete i;

    std::cout << "\n=== Creando un array de animales ===\n";
    const int tamaño = 4;
    Animal* animales[tamaño];

    for (int k = 0; k < tamaño / 2; ++k)
        animales[k] = new Dog();
    for (int k = tamaño / 2; k < tamaño; ++k)
        animales[k] = new Cat();

    std::cout << "\n=== Eliminando el array de animales ===\n";
    for (int k = 0; k < tamaño; ++k)
        delete animales[k];

    std::cout << "\n=== Probando la copia profunda (deep copy) ===\n";
    Dog perro1;
    perro1.makeSound();

    std::cout << "\nCopiando perro1 a perro2 (constructor de copia)..." << std::endl;
    Dog perro2 = perro1; // Constructor de copia

    std::cout << "\nCopiando perro1 a perro3 (operador de asignación)..." << std::endl;
    Dog perro3;
    perro3 = perro1;     // Operador de asignación

    return 0;
}
