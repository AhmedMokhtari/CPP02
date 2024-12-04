#pragma once 

#include "Fixed.hpp"

class Point
{
    private :
        Fixed x;
        Fixed y;
    public :
        Point();
        Point(const float x, const float y);
        Point(const Point &cp);
        Point &operator=(const Point &cp);
        ~Point();
};