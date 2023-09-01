#include "ClapTrap.hpp"
#include "FragTrap.hpp"

//----------------construct-------------------//

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap construct ok" << std::endl;
	this->pr_name = "FragTrap";
	this->pr_Hitpoint = 100;
	this->pr_Energy_point = 100;
	this->pr_Attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap()
{
	std::cout << "FragTrap construct ok" << std::endl;
	this->pr_name = name;
	this->pr_Hitpoint =  100;
    this->pr_Energy_point = 100;
    this->pr_Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap()
{
	std::cout << "FragTrap construct ok" << std::endl;
	pr_Hitpoint =  rhs.pr_Hitpoint;
    pr_Energy_point = rhs.pr_Energy_point;
    pr_Attack_damage = rhs.pr_Attack_damage;
}

FragTrap &FragTrap::operator=(const FragTrap &other) 
{
    if (this != &other) 
	{
        pr_Hitpoint =  other.pr_Hitpoint;
        pr_Energy_point = other.pr_Energy_point;
        pr_Attack_damage = other.pr_Attack_damage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destruct ok" << std::endl;
	return;
}

//------------combat---------------//

void FragTrap::attack(const std::string &target)
{
	if (this->pr_Hitpoint <= 0)
	{
		std::cout << "Le FragTrap " << this->pr_name << " est mort. Il ne peux plus rien faire." << std::endl;
		return;
	}
	if (this->pr_Energy_point == 0)
	{
		std::cout << "Le FragTrap " << this->pr_name << " n'as plus assez d'energie pour se battre." << std::endl;
		return;
	}
	this->pr_Energy_point--;
	std::cout << "Le FragTrap " << this->pr_name << " attaque " << target << " et lui inflige " << this->pr_Attack_damage << " dommages " << std::endl;
	return;
}

void FragTrap::highFivesGuys() 
{
	std::cout << this->pr_name << " : Allez mec !!! Tope la !" << std::endl;
}