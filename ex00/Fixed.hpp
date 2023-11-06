#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int num;
	static const int fractionalbits;
public:
	// 🐟⁉️
	Fixed();
	Fixed(int);
	Fixed(float);
	Fixed(Fixed&);
	Fixed& operator=(Fixed&);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif