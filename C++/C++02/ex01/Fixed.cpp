#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->pr_nbValue = 0;
}

Fixed::Fixed(int const n) : pr_nbValue(n << pr_nbBitValue)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const n) : pr_nbValue(roundf(n * ( 1 << pr_nbBitValue)))
{
	std::cout << "float constructor called" << std::endl;
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

int	Fixed::toInt( void ) const
{
	return this->pr_nbValue >> (pr_nbBitValue);
}

void	Fixed::setRawBits( int const raw )
{
	this->pr_nbValue = raw;
	return;
}

float	Fixed::toFloat( void ) const
{
	return static_cast<float> (this->getRawBits()) / (1 << pr_nbBitValue) ;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}