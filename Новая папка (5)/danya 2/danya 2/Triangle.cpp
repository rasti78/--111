#include "Triangle.h"
Triangle::Triangle(const double a,const double b,const double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
} 
void Triangle::set_a(const double a)
{
	if (proportion(a, b, c)) throw ("Треугольник вырожден!");
		this->a = a;
}
void Triangle::set_b(const double b)
{
	if (proportion(a,b,c)) throw ("Треугольник вырожден!");
		this->b = b;
}
void Triangle::set_c(const double c)
{
	if (proportion(a,b,c)) throw ("Треугольник вырожден!");
		this->c = c;
}
double Triangle::get_a() const { return a; }
double Triangle::get_b() const { return b; }
double Triangle::get_c() const { return c; }
bool Triangle::proportion(const double a, const double b, const double c)
{
	return a < (b + c) && b < (a + c) && c < (a + b);
}
double Triangle::angle_a() const
{
	double rad = (pow(get_a(), 2) + pow(get_c(), 2) - pow(get_b(), 2)) / (2 * get_a() * get_c());
	if (rad == 0)
	{
		return 90;
	}
	else
	{
		return (rad * sum_angle) / pi;
	}
}
double Triangle::angle_b() const
{
	double rad = ((pow(get_a(), 2) + pow(get_b(), 2)) - pow(get_c(), 2)) / (2 * get_a() * get_b());
	if (rad == 0)
	{
		return 90;
	}
	else
	{
		return (rad * sum_angle) / pi;
	}
}
double Triangle::angle_y() const { return sum_angle - (angle_a() + angle_b()); }
double Triangle::perimetr() const { return a + b + c; }
ostream& operator<<(ostream& os, const Triangle& obj)
{
	return os << "Стороны треугольника: " << "a(" << obj.get_a() << "),b(" << obj.get_b() << "),c(" << obj.get_c() << ")"
		<< ";  Периметр= " << obj.perimetr() << "; Углы: alpha(" << obj.angle_a() << "),betta(" << obj.angle_b() << "), gamma(" << obj.angle_y() << ");";
}