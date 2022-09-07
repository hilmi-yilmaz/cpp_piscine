#include <ctype.h>
#include <iostream>

void	capitalize_string(char *string)
{
	for (int i=0; string[i]; i++)
		std::cout << (char) toupper(string[i]);
}

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for (int i=1; i < argc; i++)
		capitalize_string(argv[i]);
	std::cout << std::endl;
	return 0; 
}
