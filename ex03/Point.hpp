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
        Fixed get_x() const;
        Fixed get_y() const;
        ~Point();
};
