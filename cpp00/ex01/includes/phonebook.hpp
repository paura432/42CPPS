#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

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

        Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string secret); //constructor
};

class PhoneBook{
    private :
        Contact contacts[9];
    public :
        PhoneBook();
        ~PhoneBook();
        int check_num(PhoneBook pb);
        PhoneBook del_pb(PhoneBook pb);
        PhoneBook add_cont(PhoneBook pb, int i);
        void exit();
};

#endif