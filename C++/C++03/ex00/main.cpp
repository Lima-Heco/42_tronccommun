#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	jean = ClapTrap("jean");
	ClapTrap	clap;

	jean.set_Attack_dammage(10);

	jean.attack("clap");
	clap.takeDamage(jean.get_Attack_damage());

	clap = jean;

	clap.beRepaired(20);

	return 0;
}