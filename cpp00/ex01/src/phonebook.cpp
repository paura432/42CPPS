/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:09:37 by pau               #+#    #+#             */
/*   Updated: 2025/03/17 22:09:38 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/phonebook.hpp"


PhoneBook::PhoneBook(void)
{
    return;
}
PhoneBook::~PhoneBook(void)
{
	return ;
}
int isnum(std::string s, int i)
{
    if (s.size() != 1)
        return (0);
    if (48 <= s[0] && s[0] <= 48 + i)
        return (1);
    return (0);
}

std::string  add_info(std::string msg)
{
    std::string dest;
    
    std::cout << msg;
    while (42)
    {
        std::getline(std::cin, dest);
        dest.erase(0, dest.find_first_not_of(" \t\v\f\r"));
        while (isspace(dest[dest.length() - 1]))
            dest.erase(dest.find_last_not_of(" \t\v\r\f") + 1, dest[dest.length() - 1]);
        if (dest.empty())
            std::cout << "Empty field not valid! Please, try again." << std::endl << msg;
        else
            break ;
    }
    return (dest);
}

PhoneBook    PhoneBook::add_cont(PhoneBook pb, int x)
{
    Contact new_contact(add_info("First name:"), add_info("Last name:"),
                        add_info("Nickname:"),add_info("Phone number:"),
                        add_info("Darkest secret:"));
    pb.contacts[x] = new_contact;
    return pb;
}

int PhoneBook::check_pb(PhoneBook pb)
{
    int i;

    i = 0;
    while (i < 8)
    {
        if (pb.contacts[i].isnull(pb.contacts[i]))
            break ;
        i++;
    }
    return (i);
}

PhoneBook PhoneBook::del_pb(PhoneBook pb)
{
    int i;

    i = 0;
    while (i < 7)
    {
        pb.contacts[i] = pb.contacts[i + 1];
        i++;
    }
    return (pb);
}

int PhoneBook::check_num(PhoneBook pb)
{
    int i;

    i = 0;
    while (i < 8)
    {
        if (pb.contacts[i].isnull(pb.contacts[i]))
            break ;
        i++;
    }
    return (i);
}

void        PhoneBook::display(PhoneBook pb)
{
    int i;
    int max;
    std::string index;

    i = 0;
    if (pb.contacts[0].isnull(pb.contacts[0]))
    {
        std::cout << "Your Phonebook is empty!!\n";
        return ;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    while (i < 8)
    {
        if (pb.contacts[i].isnull(pb.contacts[i]))
            break ;
        std::cout << "|" << std::setw(10) << i << "|";
        contacts[i].print_info(contacts[i], 1);
        std::cout << "|";
        contacts[i].print_info(contacts[i], 2);
        std::cout << "|";
        contacts[i].print_info(contacts[i], 3);
        std::cout << "|\n";
        std::cout << "|-------------------------------------------|" << std::endl;
        i++;
    }
    max = i - 1;
    while (42)
    {
        std::cout << "Please select the index for more info:";
        getline(std::cin, index);
        index.erase(0, index.find_first_not_of(" \t\v\f\r"));
        while (std::isspace(index[index.length() - 1]))
            index.erase(index.find_last_not_of(" \t\v\r\f") + 1, index[index.length() - 1]);
        if (index.empty())
            continue ;
        if (isnum(index, max))
            i = (int)index[0] - 48;
        else
        {
            std::cout << "Please enter a valid number >:(" << std::endl;
            continue;
        }
        pb.contacts[i].display_complete(pb.contacts[i]);
        break ;
    }
}