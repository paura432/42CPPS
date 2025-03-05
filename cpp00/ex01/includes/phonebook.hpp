#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

typedef std::string string_t;

class Contact{
    private :
        int     index;
        string_t name;
        string_t last_name;
        string_t nickname;
        int      phonenumber;
        string_t secret;
    public :
        Contact(string_t,string_t,int); //constructor
};

class PhoneBook{
    private :
        Contact contacts[9];
    public :
        PhoneBook();
        void add();
        void search();
        void delet();
        void exit();

};

#endif