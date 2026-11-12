#include "../include/Fixed.hpp"


// int main()
// {
//     Fixed F1;
//     Fixed F2(F1);
//     Fixed F3;

//     F3 = F2;
// }

int main( void ) {

    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
