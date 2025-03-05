#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	int y;
	int x;

	if(argc < 2)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return (0);
	}
	y = 0;
	while(argv[++y])
	{
		x = -1;
		while (argv[y][++x])
			std::cout<<(char)toupper(argv[y][x]);
	}
	std::cout<<std::endl;
	return (0);
}