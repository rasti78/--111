#include "Point.h"
ostream& operator<<(std::ostream& os, const polaris& obj)
{
	return os << obj.r << "," << obj.fi;
}
ostream& operator<<(ostream& os, const Point& obj)
{
	return os << "Координаты точки(" << obj.x << "," << obj.y << "); растояние до начала координат = " << obj.begin() << "; Полярные координаты(" << obj.polar() <<")";
}
double Point::get_x() const { return x; }
double Point::get_y() const { return y; }
double Point::begin() const { return sqrt((pow(get_x(), 2) + pow(get_y(), 2))); }
double Point::range(const Point& other) 
{
	double s_x = other.x - x;
	double s_y = other.y - y;
	return abs(sqrt((pow(s_x, 2) + pow(s_y, 2))));
}
string Point::compare(const Point& other)
{
	if (double_compare(x, other.x) && double_compare(y, other.y))
	{
		return "Точки равны";
	}
	else
	{
		return "Точки не равны";
	}
}
polaris Point::polar() const
{
	polaris coord;
	coord.r = begin();
	coord.fi = ((y / x) * 180) / pi;
	return coord;
}
bool Point::double_compare(const double value_a, const double value_b) const
{
	return abs(value_a - value_b) <= numeric_limits<double>::min();
}