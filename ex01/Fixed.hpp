#include <iostream>
#include <cmath>

class Fixed{
    private :
        int value;
        static const int fr = 8;
    public :
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &cp);

        // operator overloading

        Fixed& operator=(const Fixed &cp);
        std::ostream& operator<<(std::ostream& os);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);

        float toFloat( void ) const;
        int toInt( void ) const;
        
};