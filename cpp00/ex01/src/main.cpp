#include"../includes/phonebook.hpp"

typedef std::string string_t;

int main(int argc, char **argv)
{
	string_t cmd;
	PhoneBook pb;
	int x = 0;

	if(argc < 0)
		return 0;
	while(1)
	{
		std::cout<<"--------------------------------\n"<<std::endl;
		std::cout<<"------------PHONEBOOK-----------\n"<<std::endl;
		std::cout<<"--------------------------------\n"<<std::endl;
		std::cout<<"     ADD 	SEARCH    || 	EXIT\n"<<std::endl;
		std::cout<<"--------------------------------\n"<<std::endl;
		std::cout<<"Enter comand :: ";
		std::getline(std::cin, cmd);
		std::cout<<argv[0]<<std::endl;
		while(isspace(cmd[cmd.length() - 1]))
			cmd.erase(cmd.find_last_not_of(" \t\v\r\f") + 1, cmd[cmd.length() - 1]);
		if(cmd == "EXIT")
			break;
		else if(cmd == "ADD"){
			x = pb.check_num(pb);
			if (x > 7)
            {
                x = -42;
                while (x == -42)
                {
                    std::cout << "Attention! Maximum number of contacts reached, If you continue the oldest contact will be deleated in order to add the new one. (Y/N):";
                    std::getline(std::cin, cmd);
                    cmd.erase(0, cmd.find_first_not_of(" \t\v\f\r"));
                    while (isspace(cmd[cmd.length() - 1]))
                        cmd.erase(cmd.find_last_not_of(" \t\v\r\f") + 1, cmd[cmd.length() - 1]);
                    if (cmd == "Y")
                    {
                        pb = pb.del_pb(pb);
                        x = 7;
                    }
                    else if (cmd == "N")
                        x = -1;
                    else
                        std::cout << "Not valid entrance!, try again.\n";
                }
            }
            if (x >= 0)
                pb = pb.add_i(pb, i);
		}
		else if(cmd == "SEARCH"){

		}
		else if(cmd.empty()){
			continue ;
		}
	}
	return (0);
}