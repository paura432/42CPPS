/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:06:07 by pau               #+#    #+#             */
/*   Updated: 2025/04/19 12:14:54 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"
#include "../includes/Weapon.hpp"

int main() {
    // Test para HumanA (siempre tiene arma)
    {
        Weapon club("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack(); // Ataca con "crude spiked club"
        club.setType("some other type of club");
        bob.attack(); // Ataca con el nuevo tipo
    }

    // Test para HumanB (arma opcional)
    {
        Weapon club("crude spiked club");
        HumanB jim("Jim");
        jim.attack(); // Sin arma
        jim.setWeapon(club);
        jim.attack(); // Con arma inicial
        club.setType("some other type of club");
        jim.attack(); // Con arma actualizada
    }

    return 0;
}