#include "Fixed.hpp"
#include <cmath>

//------------constructors--------------//

Fixed::Fixed(void)
{
	this->pr_nbValue = 0;
	return;
}

Fixed::Fixed(int const n) : pr_nbValue(n << pr_nbBitValue)
{
	return;
}

Fixed::Fixed(float const n) : pr_nbValue(roundf(n * ( 1 << pr_nbBitValue)))
{
	return;
}

Fixed::Fixed(const Fixed &rhs)
{
	this->pr_nbValue = rhs.pr_nbValue;
	return;
}

Fixed::~Fixed (void)
{
	return;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->pr_nbValue = rhs.pr_nbValue;
	return (*this);
}

//----------------comparaison---------------//

bool Fixed::operator>(const Fixed &rhs)
{
	if (this->pr_nbValue > rhs.getRawBits())
		return 1;
	return 0;
}

bool Fixed::operator<(const Fixed &rhs)
{
	if (this < &rhs)
		return 1;
	return 0;
}

bool Fixed::operator>=(const Fixed &rhs)
{
	if (this >= &rhs)
		return 1;
	return 0;
}

bool Fixed::operator<=(const Fixed &rhs)
{
	if (this <= &rhs)
		return 1;
	return 0;
}

bool Fixed::operator==(const Fixed &rhs)
{
	if (this == &rhs)
		return 1;
	return 0;
}

bool Fixed::operator!=(const Fixed &rhs)
{
	if (this != &rhs)
		return 1;
	return 0;
}

//----------arithmetique-----------//

Fixed Fixed::operator+(const Fixed &rhs)
{
	float nb1;
	float nb2;

	nb1 = this->toFloat();
	nb2 = rhs.toFloat();

	return (Fixed(nb1 + nb2));
}

Fixed Fixed::operator-(const Fixed &rhs)
{
	float nb1;
	float nb2;

	nb1 = this->toFloat();
	nb2 = rhs.toFloat();
	return (Fixed(nb1 - nb2));
}

Fixed Fixed::operator*(const Fixed &rhs)
{
	float nb1;
	float nb2;

	nb1 = this->toFloat();
	nb2 = rhs.toFloat();
	return (Fixed(nb1 * nb2));
}

Fixed Fixed::operator/(const Fixed &rhs)
{
	float nb1;
	float nb2;

	nb1 = this->toFloat();
	nb2 = rhs.toFloat();
	return (Fixed(nb1 / nb2));
}

//---------------incrementations----------------//

Fixed Fixed::operator++()
{
	this->pr_nbValue++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp(*this);
	operator++();
	return (temp);
}

Fixed Fixed::operator--()
{
	this->pr_nbValue--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);
	operator--();
	return (tmp);
}

//------------------min/max-------------------//

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

//------------------get/set-----------------//

int	Fixed::getRawBits( void ) const
{
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