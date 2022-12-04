#ifndef __FIXED_H__
#define __FIXED_H__
#include <iostream>

class Fixed{
private:
   int				fixed_point;
   static const int	bits = 8;
public:
    Fixed ();
	Fixed (const Fixed &a);
	~Fixed ();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	void	
    Fixed & operator = (const Fixed &a);
};

#endif

