/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:35:19 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 18:55:59 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& Name) : _Name(Name), _Health(10),
 _Energy(10), _Attack(0) {
    std::cout << "ClapTrap " << _Name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _Name << " Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if(_Energy == 0) {
        std::cout << _Name << " has no energy left to attack" << std::endl;
        return ;
    }
    if(_Attack == 0) {
        std::cout << _Name << " has no attack points to attack" << std::endl;
        return ;
    }
    _Energy--;
    std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " 
              << _Attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_Health == 0) {
        std::cout << "ClapTrap " << _Name << " is already destroyed and can't take more damage!" << std::endl;
        return;
    }
    
    if (amount >= _Health) {
        _Health = 0;
        std::cout << "ClapTrap " << _Name << " takes " << amount 
                  << " points of damage and is destroyed!" << std::endl;
    } else {
        _Health -= amount;
        std::cout << "ClapTrap " << _Name << " takes " << amount 
                  << " points of damage! Hit points remaining: " << _Health << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_Energy == 0) {
        std::cout << _Name << " has no energy left to repair itself" << std::endl;
        return ;
    }
    if (_Health == 0) {
        std::cout << "ClapTrap " << _Name << " has no hit points left to repair itself!" << std::endl;
        return;
    }
    
    _Energy--;
    _Health += amount;
    std::cout << "ClapTrap " << _Name << " repairs itself for " << amount 
              << " hit points! Hit points now: " << _Health << std::endl;
}

std::string ClapTrap::getName() const {
    return _Name;
}

unsigned int ClapTrap::getHitPoints() const {
    return _Health;
}

unsigned int ClapTrap::getEnergyPoints() const {
    return _Energy;
}

unsigned int ClapTrap::getAttackDamage() const {
    return _Attack;
}
