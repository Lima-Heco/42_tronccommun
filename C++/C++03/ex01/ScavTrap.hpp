#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

    ScavTrap();
    explicit ScavTrap(std::string const& name);
    ScavTrap(ScavTrap const &scavTrap);
	ScavTrap &operator=(ScavTrap const &other);
    virtual ~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate();
};



#endif