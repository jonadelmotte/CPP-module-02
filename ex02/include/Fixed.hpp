#ifndef FIXED_HPP
# define FIXED_HPP
//verifie que le deuxieme c pas un zero faut pas diviser par zero sinon le pc il explose connard hihihi merci bien au depart aller chez le docteur
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _fracts_bits = 8;

    public:
        Fixed(void);
        Fixed(const Fixed &src);
        Fixed(const int integer);
        Fixed(const float floating);
        ~Fixed(void);

        float operator+(const Fixed &src) const;
        float operator-(const Fixed &src) const;
        float operator*(const Fixed &src) const;
        float operator/(const Fixed &src) const;
    
        bool operator==(const Fixed &src) const;
        bool operator>(const Fixed &rc) const;
        bool operator<(const Fixed &src) const;
        bool operator>=(const Fixed &src) const;
        bool operator<=(const Fixed &src) const;
        bool operator!=(const Fixed &src) const;

        float operator++();
        float operator++(int);
        float operator--();
        float operator--(int);

        Fixed &operator=(const Fixed &src);

        static Fixed &min(Fixed &one, Fixed &two);
        static const Fixed &min(const Fixed &one, const Fixed &two);
        static Fixed &max(Fixed &one, Fixed &two);
        static const Fixed &max(const Fixed &one, const Fixed &two);

        int getRawBits(void)const;
        void setRawBits(int const raw);
        int toInt(void)const;
        float toFloat(void)const;
} ;

std::ostream &operator<<(std::ostream &os, const Fixed &Fixed);

#endif
