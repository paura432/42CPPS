/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:44:19 by pau               #+#    #+#             */
/*   Updated: 2025/05/21 15:54:20 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

// sobrecargamos el operador igual para copiar el contenido de un objeto Brain a otro 
Brain &Brain::operator=(const Brain &copy) {
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &copy) {
        for (int i = 0; i < 100; i++) {
            ideas[i] = copy.ideas[i];
        }
    }
    return *this;
}

// colocamos la idea en un index determinado
void Brain::setIdea(int index, const std::string &idea)
{
    if (index >= 0 && index < 100) {
        ideas[index] = idea;
    }
}
// conseguimos una idea determinada por el index
std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100) {
        return ideas[index];
    }
    return "";
}