#include <iostream>

char	*toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return str;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (argv[i] != NULL)
	{
		std::cout << toupper(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return 0;
}
