/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:43:37 by pau               #+#    #+#             */
/*   Updated: 2025/05/21 16:11:51 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"


Dog::Dog() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*copy.brain);
}

Dog &Dog::operator=(const Dog &copy) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &copy) {
        Animal::operator=(copy);
        delete brain;
        brain = new Brain(*copy.brain);
    }
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
