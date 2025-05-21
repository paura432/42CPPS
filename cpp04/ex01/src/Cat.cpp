/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:42:23 by pau               #+#    #+#             */
/*   Updated: 2025/05/21 16:01:38 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"


Cat::Cat() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &copy) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &copy) {
        Animal::operator=(copy);
        delete brain;
        brain = new Brain(*copy.brain);
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
