/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:48:44 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 19:54:20 by pau              ###   ########.fr       */
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
    std::cout << "=== Testing Animal, Dog and Cat classes with polymorphism ===" << std::endl;
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "\n--- Testing getType() ---" << std::endl;
    std::cout << "j->getType(): " << j->getType() << std::endl;
    std::cout << "i->getType(): " << i->getType() << std::endl;
    std::cout << "meta->getType(): " << meta->getType() << std::endl;
    
    std::cout << "\n--- Testing makeSound() with polymorphism ---" << std::endl;
    std::cout << "i->makeSound(): ";
    i->makeSound();
    std::cout << "j->makeSound(): ";
    j->makeSound();
    std::cout << "meta->makeSound(): ";
    meta->makeSound();
    
    std::cout << "\n--- Testing direct objects ---" << std::endl;
    Dog dog;
    Cat cat;
    Animal animal;
    
    std::cout << "dog.getType(): " << dog.getType() << std::endl;
    std::cout << "cat.getType(): " << cat.getType() << std::endl;
    
    std::cout << "dog.makeSound(): ";
    dog.makeSound();
    std::cout << "cat.makeSound(): ";
    cat.makeSound();
    std::cout << "animal.makeSound(): ";
    animal.makeSound();
    
    std::cout << "\n=== Testing WrongAnimal and WrongCat without polymorphism ===" << std::endl;
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << "\n--- Testing getType() ---" << std::endl;
    std::cout << "wrongCat->getType(): " << wrongCat->getType() << std::endl;
    std::cout << "wrongMeta->getType(): " << wrongMeta->getType() << std::endl;
    
    std::cout << "\n--- Testing makeSound() without polymorphism ---" << std::endl;
    std::cout << "wrongCat->makeSound(): ";
    wrongCat->makeSound();
    std::cout << "wrongMeta->makeSound(): ";
    wrongMeta->makeSound();
    
    std::cout << "\n--- Testing direct WrongCat object ---" << std::endl;
    WrongCat directWrongCat;
    
    std::cout << "directWrongCat.getType(): " << directWrongCat.getType() << std::endl;
    std::cout << "directWrongCat.makeSound(): ";
    directWrongCat.makeSound();
    
    std::cout << "\n=== Cleaning up memory ===" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongCat;
    
    return 0;
}