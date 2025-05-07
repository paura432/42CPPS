/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:52:42 by pau               #+#    #+#             */
/*   Updated: 2025/04/05 16:15:47 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../includes/Zombie.hpp"

int main()
{
	int n = 2;
	Zombie *zombie = zombieHorde(n, "Alfred");
	for(int i = 0; i < n; i++){
		std::cout << "Zombie :: " << i + 1 << " :: ";
		zombie[i].announce();
	}
	delete[] zombie;
	return 0;
}