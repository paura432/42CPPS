/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:39:38 by pau               #+#    #+#             */
/*   Updated: 2025/04/05 16:07:54 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void Zombie::setname(string_t name){
    this->name = name;
}

Zombie* zombieHorde(int n, string_t name){

    Zombie* zombie = new Zombie[n];
    for(int i = 0; i < n; i++){
        zombie[i].setname(name);
    }
    return(zombie);
}