/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:41:58 by pau               #+#    #+#             */
/*   Updated: 2025/05/04 19:42:10 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        Cat &operator=(const Cat &copy);
        
        void makeSound() const;
};

#endif