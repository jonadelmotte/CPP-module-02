#include "../include/Point.hpp"

int main( void ) 
{
    Triangle triangle(Point(1, 1), Point(1, 10), Point(10, 1));
    Point   d(1, 1);


    std::cout << "a = " << triangle.get_a().get_x() << " " << triangle.get_a().get_y() << std::endl;
    std::cout << "b = " << triangle.get_b().get_x() << " " << triangle.get_b().get_y() << std::endl;
    std::cout << "c = " << triangle.get_c().get_x() << " " << triangle.get_c().get_y() << std::endl;
    std::cout << "d = " << d.get_x() << " " << d.get_y() << std::endl;
    std::cout << bsp(triangle, d) << std::endl;
}
