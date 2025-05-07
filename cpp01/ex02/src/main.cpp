/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:01:15 by pau               #+#    #+#             */
/*   Updated: 2025/04/06 20:03:26 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    
    std::string* stringPTR = &brain;
    
    std::string& stringREF = brain;

    std::cout << "Dirección de la string: " << &brain << std::endl;
    std::cout << "Dirección en stringPTR: " << stringPTR << std::endl;
    std::cout << "Dirección de stringREF: " << &stringREF << std::endl;
    
    std::cout << std::endl;
    std::cout << "Valor de la string: " << brain << std::endl;
    std::cout << "Valor apuntado por stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valor referenciado por stringREF: " << stringREF << std::endl;
    
    return 0;
}