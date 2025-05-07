/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:43:37 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 19:43:50 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &copy) {
        type = copy.type;
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

