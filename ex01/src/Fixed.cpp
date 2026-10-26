#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
    this->_value = 0;
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called\n";
    *this = src;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called\n";
    this->_value = integer;   
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "CWopy assignment operator overload called\n";
    if (this != &src)
        this->_value = src.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void)const
{
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}
