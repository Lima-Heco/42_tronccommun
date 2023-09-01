#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

    FragTrap();
    explicit FragTrap(std::string const& name);
    FragTrap(FragTrap const &FragTrap);
	FragTrap &operator=(FragTrap const &other);
    virtual ~FragTrap();

	void	attack(const std::string& target);
	void	highFivesGuys(void);
};



#endif