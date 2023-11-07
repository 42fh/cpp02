#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define POW2_8 256

class Fixed
{
private:
	int num;
	static const int fractionalbits;
public:
	// 🐟⁉️
	Fixed();
	Fixed(const int);
	Fixed(const float);
	// Fixed(Fixed&);
	Fixed(const Fixed&);
	const Fixed& operator=(const Fixed&);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void)const;
	float toFloat(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif