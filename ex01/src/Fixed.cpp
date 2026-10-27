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
    this->_value = integer >> this->_fracts_bits; 
}

Fixed::Fixed(const float floating)
{
    std::cout << "Float constructor called\n";
    this->_value = roundf(floating / (float)(1 << this->_fracts_bits));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator overload called\n";
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

int Fixed::toInt(void) const
{
    return(this->_value >> this->_fracts_bits);
}

int Fixed::toFloat(void) const
{
    return ((float)this->_value / (float)(1 << this->_fracts_bits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &Fixed)
{
    os << Fixed.toFloat();
    return (os);
}
