#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
    private:
        int _value;
        static const int _fracts_bits;

    public:
        Fixed(void);
        Fixed(const Fixed &src);
        ~Fixed(void);

        Fixed &operator=(const Fixed &src);

        int getRawBits(void)const;
        void setRawBits(int const raw);
} ;

#endif
