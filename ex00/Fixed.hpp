#pragma once
#include <iostream>

class Fixed{
    private :
        int value;
        static const int fr = 8;
    public :
        Fixed();
        Fixed(const Fixed &cp);
        Fixed& operator=(const Fixed &cp);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};