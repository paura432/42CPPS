/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:28:01 by pau               #+#    #+#             */
/*   Updated: 2025/04/19 12:52:09 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"

HumanA::HumanA(const string_t name, Weapon &weapon) 
    : name(name), weapon(weapon) {}

void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
    std::cout << "HumanA :: " << name << " :: ha sido destruido" << std::endl;
}