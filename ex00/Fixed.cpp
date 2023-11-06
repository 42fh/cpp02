#include "Fixed.hpp"

Fixed::Fixed(){}
Fixed::~Fixed(){}
Fixed::Fixed(Fixed& a){(void) a;}
Fixed::Fixed(int a){num = a;}
Fixed::Fixed(float a){num = a;}
Fixed &Fixed::operator=(Fixed& other){return other;}

int Fixed::getRawBits(void) const{	return 1;}

void Fixed::setRawBits(int const a){num = a;}