/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:46:54 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 19:48:08 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &copy) {
        type = copy.type;
    }
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongMeow!" << std::endl;
}
