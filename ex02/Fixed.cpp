#include "Fixed.hpp"
Fixed::Fixed()
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
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



Fixed Fixed::operator*(const Fixed &cp){
    float res = this->toFloat() * cp.toFloat();
    return Fixed(res);
}

Fixed Fixed::operator+(const Fixed &cp){
    float res = this->toFloat() + cp.toFloat();
    return Fixed(res);
}


Fixed Fixed::operator-(const Fixed &cp){
    float res = this->toFloat() - cp.toFloat();
    return Fixed(res);
}

Fixed Fixed::operator/(const Fixed &cp){
    float res = 0;
    if (cp.toFloat() != 0)
        res = this->toFloat() / cp.toFloat();
    else
        std::cerr << "Cannot dived by 0\n";
    return Fixed(res);
}


Fixed& Fixed::operator++(){
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->value++;
    return tmp;
}

Fixed& Fixed::operator--(){
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->value--;
    return tmp;
}

bool Fixed::operator!=(const Fixed &cp)
{
    if (cp.value == this->value)
        return false;
    return true;
}

bool Fixed::operator==(const Fixed &cp)
{
    if (cp.value == this->value)
        return true;
    return false;
}

bool Fixed::operator>(const Fixed &cp)
{
    if (cp.value > this->value)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &cp)
{
    if (cp.value < this->value)
        return true;
    return false;
}


bool Fixed::operator>=(const Fixed &cp)
{
    if (cp.value >= this->value)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &cp)
{
    if (cp.value <= this->value)
        return true;
    return false;
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


float Fixed::toFloat( void ) const{
    float a = (float)this->value / (1 << this->fr);
    return a;
}

int Fixed::toInt( void ) const{
    int a = this->value >> this->fr;
    return a;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1.value > f2.value)
        return f2;
    return f1;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1.value > f2.value)
        return f1;
    return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1.value > f2.value)
        return f2;
    return f1;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1.value > f2.value)
        return f1;
    return f2;
}

