#pragma once
#include "Figures.h"
/*
* \breif класс конус 
*/
class Cone : public Figures
{
private:
	/*
	* \breif сторона, радиус и высота конуса
	*/
	double l;
	double r;
	double h;
public:
	/*
	* \breif конструктор с параметрами
	*/
	Cone(double const l,const double const r, double const h)
	{
		this->l = l;
		this->r = r;
		this->h = h;
	}
	/*
	* \breif деструктор по умочанию
	*/
	~Cone() = default;
	/*
	* \breif площадь конуса
	*/
	double square() override;
	/*
	* \breif объем конуса
	*/
	double volume() override;
};