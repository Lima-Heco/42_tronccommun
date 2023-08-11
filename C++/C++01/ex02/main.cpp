#include <iostream>

int	main(void)
{
	std::string	str;
	std::string	*strPTR;

	str = "HI THIS IS BRAIN";
	strPTR = &str;
	std::string	&strREF = str;
	std::cout << "string address: " << &str << std::endl;
	std::cout << "stringPTR address: " << strPTR << std::endl;
	std::cout << "stringREF address: " << &strREF << std::endl;
	std::cout << "stringPTR string: " << *strPTR << std::endl;
	std::cout << "stringREF string: " << strREF << std::endl;
}