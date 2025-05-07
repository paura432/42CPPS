/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:52:42 by pau               #+#    #+#             */
/*   Updated: 2025/04/05 14:39:08 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/Zombie.hpp"

int main()
{
	Zombie *Zombie = newZombie("Alfred");;
	Zombie->announce();
	delete Zombie;
	
	// randomChump("Alfred");
	
	return 0;
}