#include "Fixed.hpp"

const int Fixed::fractionalbits = 8;

Fixed::Fixed(): num(0){std::cout << "Default constructor called" << std::endl;}
Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}
Fixed::Fixed(const Fixed& a): num(a.num) {std::cout << "Copy constructor called" << std::endl;}
Fixed::Fixed(int a){std::cout << "Int constructor called" << std::endl;num = POW2_8 * a;}
Fixed::Fixed(float a){std::cout << "Float constructor called" << std::endl;num = (float)POW2_8 * a;}

const Fixed &Fixed::operator=(const Fixed& other){std::cout << "Copy assignment operator called" << std::endl;num = other.num; return *this;}

int Fixed::getRawBits(void) const{return num;}

void Fixed::setRawBits(int const a){num = a;}

int Fixed::toInt(void) const{return roundf(this->toFloat());}

float Fixed::toFloat(void) const{ return (float)num / (float)POW2_8;}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}

