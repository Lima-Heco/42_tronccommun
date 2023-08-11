#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->pr_name = "(null)";
	return;
}

Zombie::~Zombie()
{
	return;
}

void	Zombie::announce()
{
	std::cout << this->pr_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void	Zombie::setName(std::string name)
{
	this->pr_name = name;
	return;
}