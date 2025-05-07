/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:38:27 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 19:38:48 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &copy);
        virtual ~Animal();
        Animal &operator=(const Animal &copy);
        
        virtual void makeSound() const;
        std::string getType() const;
};

#endif
