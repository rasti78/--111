#include "geo.h"
double Geo::get_sum() const { return sum; }
double Geo::noexp() const { return sum; }
double Geo::w_throw() const throw() { return sum; }
double Geo::invalid() const throw(invalid_argument)
{
	if(element1>element2)
	{
		throw invalid_argument("Элементы введены в неверном порядке!!!");
	}
	return sum;
}
double Geo::empty() const throw (empty_exeption)
{
	if (element1 > element2)
	{
		throw empty_exeption();
	}
	return sum;
}
double Geo::my_exp1() const throw(my_exeption1)
{
	if (element1 > element2)
	{
		throw my_exeption1("Элементы введены в неверном порядке!!!");
	}
	return sum;
}
double Geo::my_exp2() const throw(my_exeption2)
{
	if (element1 > element2)
	{
		throw my_exeption2("Элементы введены в неверном порядке!!!",sum);
	}
	return sum;
}