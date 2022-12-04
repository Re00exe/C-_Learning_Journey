#ifndef __FIXED_H__
#define __FIXED_H__
#include <iostream>
#include <cmath>

class Fixed{
private:
   int				fixed_point;
   static const int	bits = 8;
public:
    Fixed ();
    Fixed (const int num);
    Fixed (const Fixed &a);
	Fixed (const float fl_num);
    ~Fixed ();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed& operator = (const Fixed &a);
    bool operator< (const Fixed &a) const;
    bool operator> (const Fixed &a) const;
   	bool operator>= (const Fixed &a) const;
    bool operator<= (const Fixed &a) const;
    bool operator!= (const Fixed &a) const;
    bool operator== (const Fixed &a) const;
	Fixed operator* (const Fixed &rhs) const;
	Fixed operator/ (const Fixed &rhs) const;
	Fixed operator+ (const Fixed &rhs) const;
	Fixed operator- (const Fixed &rhs) const;
	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int dum);
	Fixed operator--(int dum);
	static Fixed	max(const Fixed &a,const Fixed &b);
	static Fixed	max(Fixed &a, Fixed &b);
	static Fixed	min(const Fixed &a,const Fixed &b);
	static Fixed	min(Fixed &a,Fixed &b);

};
	
	std::ostream& operator << (std::ostream& out ,const Fixed &a);

#endif

