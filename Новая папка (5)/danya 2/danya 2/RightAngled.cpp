#include "RightAngled.h"

RightAngled::RightAngled(const double a, const double b, const double c) {
	if (!((double_compare(a, b) && double_compare(a, c) && double_compare(b, c))==0)) throw ("Треугольник не прямоугольный!");
	::Triangle::set_a;
	::Triangle::set_b;
	::Triangle::set_c;
}
void RightAngled::set_a(const double a)
{
	if((double_compare(a, b) && double_compare(a, c) && double_compare(b, c)) == 0) throw ("Треугольник не прямоугольный!");
		::Triangle::set_a(a);
	
}
void RightAngled::set_b(const double b)
{
	if ((double_compare(a, b) && double_compare(a, c) && double_compare(b, c) == 0)) throw ("Треугольник не прямоугольный!");
		::Triangle::set_b(b);
}
void RightAngled::set_c(const double c)
{
	if ((double_compare(a, b) && double_compare(a, c) && double_compare(b, c)) == 0) throw ("Треугольник не прямоугольный!");
		::Triangle::set_c(c);
}

double RightAngled::get_square() const
{
	return sqrt((perimetr() / 2) * ((perimetr() / 2) - get_a()) * ((perimetr()) / 2 - get_b()) * ((perimetr() / 2) - get_c()));
}
ostream& operator<<(ostream& os, const RightAngled& obj)
{
	return os << "Стороны  прямоугольного треугольника: " << "a(" << obj.get_a() << "),b(" << obj.get_b() << "),c(" << obj.get_c() << ")"
		<< "; Площадь = " << obj.get_square();
}