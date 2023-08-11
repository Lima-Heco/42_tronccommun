#include "phonebook.class.hpp"

int	main()
{
	phonebook phone;
	std::string commande;

	while(commande != "EXIT")
	{
		std::cout << "entrez une commande : ";
		std::cin >> commande;
		if (commande == "ADD")
			phone.add();
		else if (commande == "SEARCH")
			phone.shearch();
		std::cin.clear();
	}
	return 0;
}