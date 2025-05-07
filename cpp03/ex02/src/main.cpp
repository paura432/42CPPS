/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 13:36:01 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 19:00:17 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

int main(void)
{
    std::cout << "=== Creating ClapTrap ===\n";
    ClapTrap claptrap("C1");
    
    std::cout << "\n=== Creating FragTrap ===\n";
    FragTrap FragTrap("T1");
    
    std::cout << "\n=== Testing attack functions ===\n";
    claptrap.attack("Target1");
    FragTrap.attack("Target2");
    
    std::cout << "\n=== Testing takeDamage ===\n";
    claptrap.takeDamage(5);
    FragTrap.takeDamage(30);
    
    std::cout << "\n=== Testing beRepaired ===\n";
    claptrap.beRepaired(3);
    FragTrap.beRepaired(10);
    
    std::cout << "\n=== Testing guardGate ===\n";
    FragTrap.highFivesGuys();
    
    std::cout << "\n=== End of program ===\n";
    return (0);
}