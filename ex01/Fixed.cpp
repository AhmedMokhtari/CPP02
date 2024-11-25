#include "Fixed.hpp"
Fixed::Fixed()
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cp)
{
    std::cout << "Copy constructor called" << std::endl;
    this->operator=(cp);
}

Fixed& Fixed::operator=(const Fixed &cp)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = cp.value;
    return *this;
}


std::ostream & operator<< (std::ostream &os, const Fixed &f)
{
    os << f.toFloat();
    return os;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}


Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value;
    this->value <<= this->fr;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    int a = roundf(val * (1 << this->fr));
    this->value = a;
}

float Fixed::toFloat( void ) const{
    float a = (float)this->value / (1 << this->fr);
    return a;
}

int Fixed::toInt( void ) const{
    int a = this->value >> this->fr;
    return a;
}
