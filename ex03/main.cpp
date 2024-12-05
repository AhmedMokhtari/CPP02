#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
bool bsp( Point const a, Point const b, Point const c, Point const point);
int main( void ) {
    // Fixed a;
    // Fixed c(1000.55f);
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;    
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    // if (10000000000000001.0 == 10000000000000000.0)
    //     std::cout << "gello\n";
    Point a(0.5f, 2.5f);
    Point b(2.5f, 4.0f);
    Point c(2.5f, 2.0f);
    Point p(2.0f,3.0f);         
    int s =  bsp(a, b, c, p);
    std::cout << "is in the middle " << s << std::endl;
    return 0;
}
