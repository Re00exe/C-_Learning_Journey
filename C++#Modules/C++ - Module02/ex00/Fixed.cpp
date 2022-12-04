#include "Fixed.hpp"


Fixed::Fixed ()
{
	std::cout << "Default constructor called\n";
	setRawBits(0);
}

Fixed::Fixed (const Fixed &a){
    std::cout << "Copy constructor called\n";
	*this = a;
}

Fixed::~Fixed (){
   std::cout << "Destructor called\n";
}


Fixed & Fixed::operator = (const Fixed &a){
	std::cout << "Copy assignment operator called\n";
	this->fixed_point = a.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return(this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}