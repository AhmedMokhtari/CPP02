#include "Point.hpp"

Point::Point():x(0), y(0){
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y):x(x), y(y){
    std::cout << "Float constructor called" << std::endl;

}

Point::Point(const  Point &cp){
    std::cout << "Copy constructor called" << std::endl;

    // if (cp != *this)
    // {
        this->x = cp.x;
        this->y = cp.y;
    // }
}

Point &Point::operator=(const Point &cp){
    std::cout << "Assign operrator  called" << std::endl;

    // if (cp != *this)
    // {
        this->x = cp.x;
        this->y = cp.y;
    // }
    return *this;
}

Point::~Point(){
    std::cout << "Destructor called" << std::endl;

}

Fixed Point::get_x() const{
    return this->x;
}
Fixed Point::get_y() const{
 return this->y;
}
