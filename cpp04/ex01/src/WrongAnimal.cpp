/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:46:32 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 19:46:49 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &copy) {
        type = copy.type;
    }
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}
