#include "Fixed.hpp"

const int Fixed::fractionalbits = 8;

Fixed::Fixed(): num(0){}
Fixed::~Fixed(){}
Fixed::Fixed(const Fixed& a): num(a.num) {}
Fixed::Fixed(int a){num = POW2_8 * a;}
Fixed::Fixed(float a){num = (float)POW2_8 * a;}

const Fixed &Fixed::operator=(const Fixed& other){num = other.num; return *this;}

int Fixed::getRawBits(void) const{return num;}

void Fixed::setRawBits(int const a){num = a;}

int Fixed::toInt(void) const{return roundf(this->toFloat());}

float Fixed::toFloat(void) const{ return (float)num / (float)POW2_8;}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}