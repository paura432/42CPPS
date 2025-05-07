/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:04:56 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 18:59:50 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _Health = 100;
    _Energy = 100;
    _Attack = 30;
    std::cout << "FragTrap " << _Name << " constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _Name << " destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (_Energy == 0) {
        std::cout << _Name << " has no energy left to attack" << std::endl;
        return ;
    }
    if (_Attack == 0) {
        std::cout << _Name << " has no attack points to attack" << std::endl;
        return ;
    }
    _Energy--;
    std::cout << "FragTrap " << _Name << " attacks " << target << ", causing "
              << _Attack << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
    if (_Health == 0) {
        std::cout << "FragTrap " << _Name << " is already destroyed and can't high five!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << _Name << " is requesting a high five!" << std::endl;
}
