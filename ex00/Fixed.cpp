#include "Fixed.hpp"

const int Fixed::fractionalbits = 8;

Fixed::Fixed(): num(0){}
Fixed::~Fixed(){}
Fixed::Fixed(const Fixed& a): num(a.num) {}
Fixed::Fixed(int a){num = (2^8) * a;}
Fixed::Fixed(float a){num = (2^8) * a;}
const Fixed &Fixed::operator=(const Fixed& other){return other;}

int Fixed::getRawBits(void) const{return num;}

void Fixed::setRawBits(int const a){num = a;}


std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.getRawBits();
	return os;
}