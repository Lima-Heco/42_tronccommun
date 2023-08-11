#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;

	i = -1;
	Zombie *horde = new Zombie[N];
	while (++i < N)
		horde[i].setName(name);
	return (horde);
}