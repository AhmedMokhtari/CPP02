#include "Point.hpp"
#include <cmath>
static Fixed calc_area(const Point &a,const Point &b,const  Point &c)
{
    Fixed res = (float)fabs((a.get_x().toFloat() * (b.get_y().toFloat() - c.get_y().toFloat()) + b.get_x().toFloat() * (c.get_y().toFloat() - a.get_y().toFloat() ) + c.get_x().toFloat() * (a.get_y().toFloat() - b.get_y().toFloat())) * 0.5f);
    return res;
}

bool bsp( Point const a, Point const b, Point const c, Point const point){
    Fixed res = calc_area(a, b, c);
    Fixed t1 = calc_area(a, b, point);
    Fixed t2 = calc_area(a, c, point);
    Fixed t3 = calc_area(b, c, point);

    if (t1.toFloat() == 0 || t2.toFloat() == 0 || t3.toFloat() == 0 || res.toFloat() == 0)
        return false;
    Fixed res_sum = t1 + t2 + t3;

    std::cout << "res_sum = " << res_sum << std::endl;

    return res == res_sum;
}  