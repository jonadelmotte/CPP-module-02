#include "../include/Fixed.hpp"

Fixed::Fixed(void)
{
    this->_value = 0;
    // std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &src)
{
    // std::cout << "Copy constructor called\n";
    *this = src;
}

Fixed::Fixed(const int integer)
{
    // std::cout << "Int constructor called\n";
    this->_value = integer << this->_fracts_bits; 
}

Fixed::Fixed(const float floating)
{
    // std::cout << "Float constructor called\n";
    this->_value = roundf(floating * (float)(1 << this->_fracts_bits));
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed &src)
{
    // std::cout << "Copy assignment operator overload called\n";
    if (this != &src)
        this->_value = src._value;
    return (*this);
}

float   Fixed::operator++()
{
    _value++;
    return (this->toFloat());
}

float   Fixed::operator++(int)
{
    Fixed temp = *this;

    this->_value++;
    return (temp.toFloat());
}

float   Fixed::operator--()
{
    _value--;
    return (this->toFloat());
}

float   Fixed::operator--(int)
{
    Fixed temp;

    temp = *this;
    this->_value--;
    return (temp.toFloat());
}

bool Fixed::operator==(const Fixed &src) const
{
    if (this->getRawBits() == src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator>(const Fixed &src) const
{
    if (this->getRawBits() > src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &src) const
{
    if (this->getRawBits() < src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &src) const
{
    if (this->getRawBits() >= src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &src) const
{
    if (this->getRawBits() <= src.getRawBits())
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &src) const
{
    if (this->getRawBits() != src.getRawBits())
        return true;
    return false;
}

float Fixed::operator/(const Fixed &src) const
{
    if (src.toFloat() == 0)
        std::cout << "[ Warning ] cannot divise by 0\n";
    else
        return this->toFloat() / src.toFloat();
    return 0;
}

float Fixed::operator*(const Fixed &src) const
{
    return this->toFloat() * src.toFloat();
}

float Fixed::operator-(const Fixed &src) const
{
    return this->toFloat() - src.toFloat();
}

Fixed Fixed::operator+(const Fixed &src) const
{
    return Fixed( this->toFloat() + src.toFloat() );
}

Fixed &Fixed::min(Fixed &one, Fixed &two)
{
    if (one < two)
        return one;
    return two;
}

Fixed const &Fixed::min(const Fixed &one, const Fixed &two)
{
    if (one > two)
        return one;
    return two;
}

Fixed &Fixed::max(Fixed &one, Fixed &two)
{
    if (one > two)
        return one;
    return two;
}

Fixed const &Fixed::max(const Fixed &one, const Fixed &two)
{
    if (one > two)
        return one;
    return two;
}

int Fixed::getRawBits(void) const
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

float Fixed::toFloat(void) const
{
    return ((float)this->_value / (float)(1 << this->_fracts_bits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &Fixed)
{
    os << Fixed.toFloat();
    return (os);
}
