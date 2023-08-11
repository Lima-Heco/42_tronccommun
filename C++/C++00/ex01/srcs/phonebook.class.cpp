#include "phonebook.class.hpp"

phonebook::phonebook( void )
{
	this->i = 0;
	this->max = 7;
	return;
}

phonebook::~phonebook( void )
{
	return;
}

void	phonebook::add( void )
{
	int	j;
	contact	temp;

	j = 0;
	if (this->i > this->max)
	{
		std::cout << "start moov" << std::endl;
		this->contacts[0].freecontact();
		j = 0;
		while (j < this->max)
		{
			temp = this->contacts[j + 1];
			this->contacts[j + 1] = this->contacts[j];
			this->contacts[j] = temp;
			j++;
		}
		std::cout << "MOOV REUSSI" << std::endl;
		this->contacts[this->max].add(this->i + 1);
	}
	else
		this->contacts[this->i].add(this->i + 1);
	if (this->i <= this->max)
		this->i++;
	return;
}

void phonebook::shearch( void )
{
	int	j;
	int	e;

	j = 0;
	if (this->i == 0)
		return;
	while(j < this->i)
	{
		this->contacts[j].showct(j + 1);
		std::cout << std::endl;
		j++;
	}
	std::cout << "index du contact rechercher : ";
	std::cin >> j;
	e = std::cin.fail();
	if (!(j > 0 && j <= this->i) || e >= 1)
	{
		e = 0;
		std::cin.clear();
		std::cout << "vous avez rentrer un mauvais argument , re essayez\n";
		return;
	}
	this->contacts[j - 1].contactfind(j);
	return;
}

contact::contact( void )
{
	return;
}

contact::~contact( void )
{
	return;
}

void	contact::add( int i )
{
	std::cout << "entrez le prenom : ";
	std::cin >> this->pr_firstname;
	std::cout << "entrez le nom : ";
	std::cin >> this->pr_lastname;
	std::cout << "entrez le surnom : ";
	std::cin >> this->pr_nickname;
	std::cout << "entrez le numerot de tellephone : ";
	std::cin >> this->pr_phonenumber;
	std::cout << "entrez le plus grand secret : ";
	std::getline(std::cin, this->pr_darkest , '\n');
	std::getline(std::cin, this->pr_darkest , '\n');
	std::cout << "contact numerot " << i << " ajouter" << std::endl << std::endl;
	return;
}

void	contact::printelem(std::string str)
{
	int	j;
	const int max = 10;
	std::string temp = str.substr(0, 9);

	j = str.length();
	if	(j > max)
		std::cout << temp << ".";
		else
		std::cout << str;
	while (++j <= max)
		std::cout << " ";
	std:: cout << "|";
	return;
}

void	contact::showct(int i)
{
	std::cout << i << "         " << "|";
	this->printelem(this->pr_firstname);
	this->printelem(this->pr_lastname);
	this->printelem(this->pr_nickname);
	return;
}

void	contact::contactfind(int i)
{
	std::cout << i << '\n';
	std::cout << this->pr_firstname << '\n';
	std::cout << this->pr_lastname << '\n';
	std::cout << this->pr_nickname << '\n';
	std::cout << this->pr_phonenumber << '\n';
	std::cout << this->pr_darkest << '\n';
	return;
}

void	contact::freecontact( void )
{
	this->pr_firstname.clear();
	this->pr_lastname.clear();
	this->pr_nickname.clear();
	this->pr_phonenumber.clear();
	this->pr_darkest.clear();
	return;
}
