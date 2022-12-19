#include "Fixed.hpp"


Fixed::Fixed ()
{
	setRawBits(0);
}

Fixed::Fixed (const	int	num)
{
	this->setRawBits(num << this->bits);
}

Fixed::Fixed (const float fl_num)
{
	this->setRawBits(roundf(fl_num * (1 << this->bits)));
}

Fixed::Fixed (const Fixed &a){

	*this = a;
}

Fixed::~Fixed (){

}

 Fixed & Fixed::operator = (const Fixed &a){
	setRawBits(a.getRawBits());
	return *this;
}


Fixed Fixed::operator-(const Fixed &rhs) const
{
	Fixed	result;

	result.setRawBits((this->fixed_point - rhs.fixed_point));
	return (result);
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	Fixed	result;

	result.setRawBits((this->fixed_point + rhs.fixed_point));
	return (result);
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	Fixed	result;

	result.setRawBits((this->fixed_point / (rhs.fixed_point >> this->bits)));
	return (result);
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed	result;

	result.setRawBits((this->fixed_point * rhs.fixed_point) >> (this->bits));
	return (result);
}

Fixed Fixed::operator++()
{
	this->setRawBits(this->fixed_point + 1);
	return (*this);
}

Fixed Fixed::operator--()
{
	this->setRawBits(this->fixed_point - 1);
	return (*this);
}

Fixed Fixed::operator++(int	dum)
{
	
	(void)dum;
	Fixed tmp = *this;
	this->setRawBits(this->fixed_point + 1);
	return (tmp);
}

Fixed Fixed::operator--(int	dum)
{
	
	(void)dum;
	Fixed	tmp;

	tmp = (*this);
	this->setRawBits(this->fixed_point - 1);
	return (tmp);
}

bool Fixed::operator< (const Fixed &a) const
{
	return (this->fixed_point < a.fixed_point );
}

bool Fixed::operator> (const Fixed &a) const
{
	return (this->fixed_point > a.fixed_point );
}

bool Fixed::operator<= (const Fixed &a) const
{
	return (this->fixed_point <= a.fixed_point );
}

bool Fixed::operator== (const Fixed &a) const
{
	return (this->fixed_point == a.fixed_point );
}

bool Fixed::operator>= (const Fixed &a) const
{
	return (this->fixed_point >= a.fixed_point );
}

bool Fixed::operator!= (const Fixed &a) const
{
	return (this->fixed_point != a.fixed_point );
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

Fixed	Fixed::max(const Fixed &a,const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed	Fixed::min(const Fixed &a,const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed	Fixed::min(Fixed &a,Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);	
}