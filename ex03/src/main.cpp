#include "../include/Point.hpp"

int main( void ) 
{
    Point a(12, 23);

    std::cout << "a.x = " << a.get_x() << "\na.y = " << a.get_y() << std::endl;
}
