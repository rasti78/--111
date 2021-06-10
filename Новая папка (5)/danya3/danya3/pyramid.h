#pragma once
#include "Figures.h"
/*
* \brief дочерний класс пирамида
*/
class Pyramid : public Figures
{
private:
	/*
	* \breif стороны и высота пирамиды
	*/
	double a;
	double b;
	double h;

public:
	/*
	* \brief конструктор с параметрами 
	*/
	Pyramid(const double a, const double b, const double h)
	{
		this->a = a;
		this->b = b;
		this->h = h;
	}
	/*
	* \breif деструктор по умочанию
	*/
	~Pyramid()=default;
	/*
	* \breif площадь пирамиды
	*/
	double square() override;
	/*
	* \breif объем пирамиды
	*/
	double volume() override;
};
