#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class contact {
	private:
		std::string	pr_firstname;
		std::string	pr_lastname;
		std::string	pr_nickname;
		std::string	pr_phonenumber;
		std::string	pr_darkest;
		int	pr_cntnbr;
	public:
		contact(void);
		~contact(void);
		void	add(int i);
		void	showct(int i);
		void	contactfind(int i);
		void	printelem(std::string str);
		void	freecontact(void);
};

class phonebook {

	//private:
	public:

		contact	contacts[8];
		int	i;
		int	max;

		phonebook(void);
		~phonebook(void);
		void	add(void);
		void	shearch(void);
};

#endif