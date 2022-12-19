#include "Fixed.hpp"


Fixed::Fixed ()
{
	std::cout << "Default constructor called\n";
	setRawBits(0);
}

Fixed::Fixed (const	int	num)
{
	std::cout <<  "Int contructor called\n";
	this->setRawBits(num << this->bits);
}

Fixed::Fixed (const float fl_num)
{
	std::cout <<  "Float contructor called\n";
	this->setRawBits(roundf(fl_num * (1 << this->bits)));
}

Fixed::Fixed (const Fixed &a){
    std::cout << "Copy constructor called\n";
	*this = a;
}

Fixed::~Fixed (){
   std::cout << "Destructor called\n";
}

Fixed& Fixed::operator = (const Fixed &a){
	std::cout << "Copy assignment operator called\n";
	setRawBits(a.getRawBits());
	return *this;
}


std::ostream& operator << (std::ostream& out ,const Fixed &a){
	out << a.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	return(this->fixed_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

float Fixed::toFloat(void) const
{
	return(float(this->fixed_point) / (float)(1 << this->bits));
}

int Fixed::toInt(void) const
{
	return((this->fixed_point >> this->bits));
}