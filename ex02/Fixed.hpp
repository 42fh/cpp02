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

	bool operator!=(const Fixed&) const;
	bool operator==(const Fixed&) const;
	bool operator<(const Fixed&) const;
	bool operator<=(const Fixed&) const;
	bool operator>(const Fixed&) const;
	bool operator>=(const Fixed&) const;

	Fixed operator+(const Fixed&);
	Fixed operator-(const Fixed&);
	Fixed operator*(const Fixed&);
	Fixed operator/(const Fixed&);

	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);

	static Fixed& min(Fixed&, Fixed&);
	static const Fixed& min(const Fixed&, const Fixed&);
	static Fixed& max(Fixed&, Fixed&);
	static const Fixed& max(const Fixed&, const Fixed&);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void)const;
	float toFloat(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);



#endif