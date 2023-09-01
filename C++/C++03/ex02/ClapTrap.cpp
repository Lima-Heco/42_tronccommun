#include "ClapTrap.hpp"

//----------------construct-------------------//

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap construct ok" << std::endl;
	this->pr_name = "ClapTrap";
	this->pr_Hitpoint = 10;
	this->pr_Energy_point = 10;
	this->pr_Attack_damage = 0;
	return;
}

ClapTrap::ClapTrap(std::string name) : pr_name(name)
{
	std::cout << "ClapTrap construct ok" << std::endl;
	this->pr_Hitpoint = 10;
	this->pr_Energy_point = 10;
	this->pr_Attack_damage = 0;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << "ClapTrap construct ok" << std::endl;
	this->pr_name = rhs.get_name();
	this->pr_Hitpoint = rhs.get_Hitpoint();
	this->pr_Energy_point = rhs.get_Energy_point();
	this->pr_Attack_damage = rhs.get_Attack_damage();
	return;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->pr_name = rhs.get_name();
		this->pr_Hitpoint = rhs.get_Hitpoint();
		this->pr_Energy_point = rhs.get_Energy_point();
		this->pr_Attack_damage = rhs.get_Attack_damage();
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destruct ok" << std::endl;
	return;
}

//----------------------get*---------------------//

std::string	ClapTrap::get_name(void) const
{
	return(this->pr_name);
}

int	ClapTrap::get_Hitpoint(void) const
{
	return (this->pr_Hitpoint);
}

int	ClapTrap::get_Energy_point(void) const
{
	return (this->pr_Energy_point);
}

int	ClapTrap::get_Attack_damage(void) const
{
	return (this->pr_Attack_damage);
}

//----------------------set*-----------------------//

void	ClapTrap::set_Attack_dammage(unsigned int amount)
{
	this->pr_Attack_damage = amount;
	return;
}

//---------------Combat!!!!------------//

void	ClapTrap::attack(const std::string& target)
{
	if (this->pr_Hitpoint <= 0)
	{
		std::cout << "Le ClapTrap " << this->pr_name << " est mort. Il ne peux plus rien faire." << std::endl;
		return;
	}
	if (this->pr_Energy_point == 0)
	{
		std::cout << "Le ClapTrap " << this->pr_name << " n'as plus assez d'energie pour se battre." << std::endl;
		return;
	}
	this->pr_Energy_point--;
	std::cout << "Le ClapTrap " << this->pr_name << " attaque " << target << " et lui inflige " << this->pr_Attack_damage << " dommages " << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Le ClapTrap " << this->pr_name << " est attaquer et prend " << amount << " dommages." << std::endl;
	this->pr_Hitpoint -= amount;
	if (this->pr_Hitpoint < 1)
		std::cout << "Le ClapTrap " << this->pr_name << " meurt suite a ces blessures." << std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->pr_Hitpoint <= 0)
	{
		std::cout << "Le ClapTrap " << this->pr_name << " est mort. Il ne peux plus rien faire." << std::endl;
		return;
	}
	if (this->pr_Energy_point == 0)
	{
		std::cout << "Le ClapTrap " << this->pr_name << " n'as plus assez d'energie pour se reparrer." << std::endl;
		return;
	}
	this->pr_Energy_point--;
	std::cout << "Le ClapTrap " << this->pr_name << " se reparre et recupere " << amount << " points de sante." << std::endl;
	return;
}