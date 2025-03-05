#include"../includes/phonebook.hpp"


PhoneBook::PhoneBook(void)
{
    return;
}
PhoneBook::~PhoneBook(void)
{
	return ;
}

PhoneBook    PhoneBook::add_cont(PhoneBook pb, int i)
{
    Contact new_contact(add_info("First name:"), add_info("Last name:"),
                        add_info("Nickname:"),add_info("Phone number:"),
                        add_info("Darkest secret:"));
    pb.contacts[i] = new_contact;
    return pb;
}

int     PhoneBook::check_num(PhoneBook pb)
{
    int i = -1;
    while(++i < 8)
        if(pb.contacts[i].isnull(pb.contacts[i]))
            break;
}

PhoneBook    PhoneBook::del_pb(PhoneBook pb)
{
    int i = -1;
    while(++i < 7)
        pb.contacts[i] = pb.contacts[i + 1];
}

void exit();