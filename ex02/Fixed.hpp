#pragma once
#include <iostream>
#include <cmath>

class Fixed{
    private :
        int value;
        static const int fr = 8;
    public :
        // constructor 
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &cp);

        // assign operator 
        Fixed& operator=(const Fixed &cp);
        Fixed operator*(const Fixed &cp);
        Fixed operator+(const Fixed &cp);
        Fixed operator-(const Fixed &cp);
        Fixed operator/(const Fixed &cp);

        // comparaisson operators 
        bool operator>(const Fixed &cp);
        bool operator<(const Fixed &cp);
        bool operator>=(const Fixed &cp);
        bool operator<=(const Fixed &cp);
        bool operator==(const Fixed &cp);
        bool operator!=(const Fixed &cp);

        // increment operators 

        Fixed& operator++();
        Fixed operator++(int);

        Fixed& operator--();
        Fixed operator--(int);


        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat( void ) const;
        int toInt( void ) const;

        static Fixed &min(Fixed &f1, Fixed &f2);
        static const Fixed &min(const Fixed &f1, const Fixed &f2);
        static Fixed &max(Fixed &f1, Fixed &f2);
        static const Fixed &max(const Fixed &f1, const Fixed &f2);
};