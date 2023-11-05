class Fixed
{
private:
	int num;
	static const int fractionalbits;
public:
	// 🐟
	Fixed();
	Fixed(Fixed& other);
	Fixed& operator=(Fixed&);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
};
