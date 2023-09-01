#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

//----------------construct-------------------//

ScavTrap::ScavTrap(void)
{
	this->pr_name = "ScavTrap";
	this->pr_Hitpoint = 100;
	this->pr_Energy_point = 50;
	this->pr_Attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->pr_Hitpoint =  100;
    this->pr_Energy_point = 50;
    this->pr_Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs)
{
	pr_Hitpoint =  rhs.pr_Hitpoint;
    pr_Energy_point = rhs.pr_Energy_point;
    pr_Attack_damage = rhs.pr_Attack_damage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) 
{
    if (this != &other) 
	{
        pr_Hitpoint =  other.pr_Hitpoint;
        pr_Energy_point = other.pr_Energy_point;
        pr_Attack_damage = other.pr_Attack_damage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
	return;
}

//------------combat---------------//

void ScavTrap::attack(const std::string &target)
{
	if (this->pr_Hitpoint <= 0)
	{
		std::cout << "Le ScavTrap " << this->pr_name << " est mort. Il ne peux plus rien faire." << std::endl;
		return;
	}
	if (this->pr_Energy_point == 0)
	{
		std::cout << "Le ScavTrap " << this->pr_name << " n'as plus assez d'energie pour se battre." << std::endl;
		return;
	}
	this->pr_Energy_point--;
	std::cout << "Le ScavTrap " << this->pr_name << " attaque " << target << " et lui inflige " << this->pr_Attack_damage << " dommages " << std::endl;
	return;
}

void ScavTrap::guardGate() 
{
	std::cout << "Yayyy!! ScavTrap " << this->pr_name << " have entered in Gate keeper mode." << std::endl;
}