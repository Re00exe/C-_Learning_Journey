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
    Fixed & operator = (const Fixed &a);
	float	toFloat(void) const;
	int		toInt(void) const;
};
	
	std::ostream& operator << (std::ostream& out ,const Fixed &a);

#endif

