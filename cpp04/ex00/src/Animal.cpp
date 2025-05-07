/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:40:39 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 19:41:38 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy) {
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &copy) {
        type = copy.type;
    }
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
    return type;
}
