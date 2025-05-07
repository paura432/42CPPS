/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:44:41 by pramos            #+#    #+#             */
/*   Updated: 2025/04/05 14:09:16 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/Zombie.hpp"

void randomChump( string_t name )
{
    Zombie *Zombie = newZombie(name);
    Zombie->announce();
    delete Zombie;
    return ;
}