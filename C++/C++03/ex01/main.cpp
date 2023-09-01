#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap jean = ScavTrap("ultra gatekeeper");
	ScavTrap jack;
	jean.attack("le mec qui s'approche trop");
	jean.takeDamage(20);
	jean.beRepaired(5);
	jack = jean;
	jack.guardGate();
	jack.takeDamage(100);

	return 0;
}