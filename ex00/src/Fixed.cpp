#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
    this->_value = 0;
    std::cout << "default constructor called\n";
}

Fixed::Fixed(const Fixed &src)
{
    *this = src;
    std::cout << "copy constructor called\n";
}

Fixed::~Fixed(void)
{
    std::cout << "destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "copy assignment operator overload called\n";
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