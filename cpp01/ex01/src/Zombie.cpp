/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:44:44 by pramos            #+#    #+#             */
/*   Updated: 2025/04/05 16:14:28 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << name << " : ha sido destruido" << std::endl;
}

Zombie::Zombie() {
    std::cout << "Zombie " << name << " : ha sido creado" << std::endl;
}

Zombie::Zombie(string_t name) : name(name) 
{
    std::cout << "Zombie " << name << " : ha sido creado" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}