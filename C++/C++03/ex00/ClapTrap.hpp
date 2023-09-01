#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:

		std::string	pr_name;
		int pr_Hitpoint;
		int pr_Energy_point;
		int pr_Attack_damage;

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &rhs);
		ClapTrap&	operator=(const ClapTrap &rhs);
		~ClapTrap(void);

		std::string	get_name(void) const;
		int	get_Hitpoint(void) const;
		int	get_Energy_point(void) const;
		int	get_Attack_damage(void) const;

		void	set_Attack_dammage(unsigned int amount);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

#endif