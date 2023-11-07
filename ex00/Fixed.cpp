#include "Fixed.hpp"

const int Fixed::fractionalbits = 8;

Fixed::Fixed(): num(0){std::cout << "Default constructor called" << std::endl;}
Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}
Fixed::Fixed(const Fixed& a): num(a.num) {std::cout << "Copy constructor called" << std::endl;}
const Fixed &Fixed::operator=(const Fixed& other){std::cout << "Copy assignment operator called" << std::endl;num = other.num; return *this;}

int Fixed::getRawBits(void) const{std::cout << "getRawBits member function called" << std::endl;return num;}

void Fixed::setRawBits(int const a){std::cout << "" << std::endl;num = a;}
