#include "../include/Fixed.hpp"

int main()
{
    Fixed const b(10);

    std::cout << "b = " << b.getRawBits() << std::endl;
    return 0;
}
