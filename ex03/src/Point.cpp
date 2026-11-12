#include "../include/Point.hpp"



/**********************************************************/
/*                                                        */
/*                 POINT CLASS                            */
/*                                                        */
/**********************************************************/

Point::Point(void) : _x(0), _y(0)
{

}

Point::Point(const Point &Point) : _x(Point.get_x()), _y(Point.get_y())
{
    
}

Point::Point(const int &x, const int &y) : _x(x), _y(y)
{

}

Point::~Point(void)
{

}

void    Point::set_values(const int &x, const int &y)
{
    set_x(x);
    set_y(y);
}

void    Point::set_x(const Fixed &x)
{
    _x = x;
}

void    Point::set_y(const Fixed &y)
{
    _y = y;
}

Fixed   Point::get_x() const
{
    return _x;
}

Fixed   Point::get_y() const
{
    return _y;
}

Point   &Point::operator=(const Point &src)
{
    if (this != &src)
    {
        set_x(src._x);
        set_y(src._y);
    }
    return (*this);
}




/**********************************************************/
/*                                                        */
/*                 TRIANGLE CLASS                         */
/*                                                        */
/**********************************************************/

Triangle::Triangle() : _a(0, 0), _b(0, 0), _c(0, 0)
{

}

Triangle::Triangle(const Triangle &Triangle) : _a(Triangle.get_a()), _b(Triangle.get_b()), _c(Triangle.get_c())
{

}

Triangle::Triangle(const Point &a, const Point &b, const Point &c) : _a(a), _b(b), _c(c)
{
}

Triangle::~Triangle()
{

}

void    Triangle::set_values(const Point &a, const Point &b, const Point &c)
{
    set_a(a);
    set_b(b);
    set_c(c);
}

void    Triangle::set_a(const Point &a)
{
    _a = a;
}

void    Triangle::set_b(const Point &b)
{
    _b = b;
}

void    Triangle::set_c(const Point &c)
{
    _c = c;
}

Point   Triangle::get_a() const
{
    return _a;
}

Point   Triangle::get_b() const
{
    return _b;
}

Point   Triangle::get_c() const
{
    return _c;
}

Triangle    &Triangle::operator=(const Triangle &Triangle)
{
    if (this != &Triangle)
    {
        set_a(Triangle.get_a());
        set_b(Triangle.get_b());
        set_c(Triangle.get_c());
    }
    return (*this);

}

Fixed Triangle::get_area() const
{
    Fixed a = _a.get_x() * (_b.get_y() - _c.get_y());
    Fixed b = _b.get_x() * (_c.get_y() - _a.get_y());
    Fixed c = _c.get_x() * (_a.get_y() - _b.get_y());
    Fixed area;

    area = (a + b + c) / 2;
    if(area < 0.0001f)
        area = area * (-1);
    return (area);
}
