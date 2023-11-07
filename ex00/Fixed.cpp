#include "Fixed.hpp"

const int Fixed::fractionalbits = 8;

Fixed::Fixed(): num(0){}
Fixed::~Fixed(){}
Fixed::Fixed(const Fixed& a): num(a.num) {}
const Fixed &Fixed::operator=(const Fixed& other){num = other.num; return *this;}

int Fixed::getRawBits(void) const{return num;}

void Fixed::setRawBits(int const a){num = a;}
