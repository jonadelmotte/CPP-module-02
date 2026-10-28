#include "../include/Point.hpp"

bool    bsp(const Triangle &triangle, const Point &point)
{
    Triangle const one( triangle.get_a(), triangle.get_b(), point );
    Triangle const two( triangle.get_a(), point, triangle.get_c() );
    Triangle const three( point, triangle.get_b(), triangle.get_c() );

    if (one.get_area() == 0 || two.get_area() == 0 || three.get_area() == 0)
        return false;
    if (one.get_area() + two.get_area() + three.get_area() - triangle.get_area() == 0)
        return true;
    return false;
}
