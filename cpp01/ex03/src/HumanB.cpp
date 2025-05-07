/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:26:59 by pau               #+#    #+#             */
/*   Updated: 2025/04/19 13:23:44 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanB.hpp"

HumanB::HumanB(const string_t& name) 
    : name(name) {}

HumanB::~HumanB() {
    std::cout << "HumanB :: " << this->name << " :: ha sido destruido" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
    weapon = weapon;
}

void HumanB::attack(void) const {

    if (this->weapon)
        std::cout << this->name << " attack with their " << weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack " << std::endl;
}