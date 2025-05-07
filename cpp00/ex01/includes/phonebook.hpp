/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:16:31 by pau               #+#    #+#             */
/*   Updated: 2025/03/17 22:16:32 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <contact.hpp>

typedef std::string string_t;

class PhoneBook{
    private :
        Contact contacts[9];
    public :
        PhoneBook();
        ~PhoneBook();
        int check_num(PhoneBook pb);
        int check_pb(PhoneBook pb);
        void display(PhoneBook pb);
        PhoneBook del_pb(PhoneBook pb);
        PhoneBook add_cont(PhoneBook pb, int i);
        void exit();
};

#endif