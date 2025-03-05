#include"../includes/phonebook.hpp"

typedef std::string string_t;

int main(int argc, char **argv)
{
    string_t cmd;
	int x = -1;

	if(argc < 0)
		return 0;
	while(1)
	{
		std::cout<<"--------------------------------"<<std::endl;
		std::cout<<"------------PHONEBOOK-----------"<<std::endl;
		std::cout<<"--------------------------------\n"<<std::endl;
		std::cout<<"     ADD SEARCH or EXIT\n"<<std::endl;
		std::cout<<"Enter comand :: ";
		std::getline(std::cin, cmd);
		std::cout<<argv[0]<<std::endl;
		while(!comand[++x])
	}
	return (0);
}