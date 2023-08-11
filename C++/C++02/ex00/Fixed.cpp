#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->pr_nbValue = 0;
}

Fixed::Fixed(const Fixed &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	this->pr_nbValue = rhs.pr_nbValue;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->pr_nbValue = rhs.pr_nbValue;
	return (*this);
}

Fixed::~Fixed (void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->pr_nbValue);
}

void	Fixed::setRawBits( int const raw )
{
	this->pr_nbValue = raw;
	return;
}