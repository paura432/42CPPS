/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:32:43 by pau               #+#    #+#             */
/*   Updated: 2025/03/17 21:44:23 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


# include <iostream>
# include <iomanip>
# include <string>

typedef std::string string_t;

class Contact{
    private :
        int      index;
        string_t first_name;
        string_t last_name;
        string_t nickname;
        string_t phone;
        string_t secret;
    public :
        Contact();
        ~Contact();
        
        Contact(string_t first_name, string_t last_name, string_t nickname, string_t phone, string_t secret); //constructor
        
        int     isnull(Contact contact);
        void    print_info(Contact contact, int i);
        void    display_complete(Contact contact);
};

#endif