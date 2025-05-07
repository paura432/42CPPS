/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pau <pau@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:09:41 by pau               #+#    #+#             */
/*   Updated: 2025/03/17 22:09:42 by pau              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
                while (true){
                    std::cout << "Attention! Maximum number of contacts reached, If you continue the oldest contact will be deleated in order to add the new one. (Y/N):";
                    std::getline(std::cin, cmd);
                    cmd.erase(0, cmd.find_first_not_of(" \t\v\f\r"));
                    while (isspace(cmd[cmd.length() - 1]))
                        cmd.erase(cmd.find_last_not_of(" \t\v\r\f") + 1, cmd[cmd.length() - 1]);
                    if (cmd == "Y")
                    {
                        pb = pb.del_pb(pb);
                        x = 7;
						break;
                    }
                    else if (cmd == "N")
					{
                        x = -1;
						break;
					}
                    else
                        std::cout << "Not valid entrance!, try again.\n";
                }
            }
            if (x >= 0)
                pb = pb.add_cont(pb, x);
		}
		else if(cmd == "SEARCH"){
			pb.display(pb);
		}
		else if(cmd.empty()){
			continue ;
		}
	}
	return (0);
}