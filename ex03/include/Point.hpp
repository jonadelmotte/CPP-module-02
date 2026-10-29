#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include <cmath>
#include "Fixed.hpp"

class Point
{
    private :
        Fixed _x;
        Fixed _y;

    public :
        Point();
        Point(const int &x, const int &y);
        ~Point();

        Point &operator=(const Point &src);

        void set_x(const Fixed &x);
        void set_y(const Fixed &y);
        void set_values(const int &x, const int &y);

        Fixed get_x() const;
        Fixed get_y() const;
}   ;

class Triangle
{
    private :
        Point _a;
        Point _b;
        Point _c;
    
    public :
        Triangle();
        Triangle(const Point &a, const Point &b, const Point &c);
        ~Triangle();

        void set_a(const Point &a);
        void set_b(const Point &b);
        void set_c(const Point &c);
        void set_values(const Point &a, const Point &b, const Point &c);

        Point get_a() const;
        Point get_b() const;
        Point get_c() const;

        Fixed get_area() const;
} ;

bool    bsp(const Triangle &triangle, const Point &point);

#endif