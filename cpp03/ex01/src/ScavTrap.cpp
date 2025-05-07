/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:04:56 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 18:46:08 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _Health = 100;
    _Energy = 50;
    _Attack = 20;
    std::cout << "ScavTrap " << _Name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _Name << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_Energy == 0) {
        std::cout << _Name << " has no energy left to attack" << std::endl;
        return ;
    }
    if (_Attack == 0) {
        std::cout << _Name << " has no attack points to attack" << std::endl;
        return ;
    }
    _Energy--;
    std::cout << "ScavTrap " << _Name << " attacks " << target << ", causing "
              << _Attack << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    if (_Health == 0) {
        std::cout << "ScavTrap " << _Name << " is already destroyed and can't guard the gate!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _Name << " is now in Gate Keeper mode!" << std::endl;
}
