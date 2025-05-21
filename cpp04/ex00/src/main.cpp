/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:48:44 by pau               #+#    #+#             */
/*   Updated: 2025/05/21 16:31:14 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Probando clases Animal, Dog y Cat con polimorfismo ===" << std::endl;
    
    const Animal* meta = new Animal(); // Esto fallará si Animal es abstracta
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "\n--- Probando getType() ---" << std::endl;
    std::cout << "j->getType(): " << j->getType() << std::endl;
    std::cout << "i->getType(): " << i->getType() << std::endl;
    std::cout << "meta->getType(): " << meta->getType() << std::endl;
    
    std::cout << "\n--- Probando makeSound() con polimorfismo ---" << std::endl;
    std::cout << "i->makeSound(): ";
    i->makeSound();
    std::cout << "j->makeSound(): ";
    j->makeSound();
    std::cout << "meta->makeSound(): ";
    meta->makeSound();
    
    std::cout << "\n--- Probando objetos directos ---" << std::endl;
    Dog perro;
    Cat gato;
    Animal animal; // Esto también fallará si Animal es abstracta
    
    std::cout << "perro.getType(): " << perro.getType() << std::endl;
    std::cout << "gato.getType(): " << gato.getType() << std::endl;
    
    std::cout << "perro.makeSound(): ";
    perro.makeSound();
    std::cout << "gato.makeSound(): ";
    gato.makeSound();
    std::cout << "animal.makeSound(): ";
    animal.makeSound();
    
    std::cout << "\n=== Probando WrongAnimal y WrongCat sin polimorfismo ===" << std::endl;
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << "\n--- Probando getType() ---" << std::endl;
    std::cout << "wrongCat->getType(): " << wrongCat->getType() << std::endl;
    std::cout << "wrongMeta->getType(): " << wrongMeta->getType() << std::endl;
    
    std::cout << "\n--- Probando makeSound() sin polimorfismo ---" << std::endl;
    std::cout << "wrongCat->makeSound(): ";
    wrongCat->makeSound();
    std::cout << "wrongMeta->makeSound(): ";
    wrongMeta->makeSound();
    
    std::cout << "\n--- Probando objeto directo WrongCat ---" << std::endl;
    WrongCat gatoIncorrectoDirecto;
    
    std::cout << "gatoIncorrectoDirecto.getType(): " << gatoIncorrectoDirecto.getType() << std::endl;
    std::cout << "gatoIncorrectoDirecto.makeSound(): ";
    gatoIncorrectoDirecto.makeSound();
    
    std::cout << "\n=== Liberando memoria ===" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongCat;
    
    return 0;
}
