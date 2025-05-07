/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:46:02 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 19:46:12 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &copy);
        
        void makeSound() const;
        std::string getType() const;
};

#endif