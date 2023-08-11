#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	public:

		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);

	private:

		std::string	pr_name;

};

#endif