/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:26:27 by pau               #+#    #+#             */
/*   Updated: 2025/04/19 12:44:42 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(string_t type) : type(type) {}

Weapon::~Weapon() {
    std::cout << "Weapon ha sido destruido" << std::endl;
}

const string_t& Weapon::getType(void) const {
    return this->type;
}

void Weapon::setType(string_t newType){
    this->type = newType;
}
