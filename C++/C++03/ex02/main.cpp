#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap jean = FragTrap("yoy");
	FragTrap jack;
	jean.attack("le mec qui s'approche trop");
	jean.takeDamage(20);
	jean.beRepaired(5);
	jack = jean;
	jack.highFivesGuys();
	jack.takeDamage(100);

	return 0;
}