#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie test = Zombie(name);
	test.announce();
}