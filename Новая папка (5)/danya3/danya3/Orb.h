#pragma once
#include "Figures.h"
/*
* \brief класс шар
*/
class Orb : public Figures
{
private:
	/*
	* \breif радиус шара
	*/
	double r;

public:
	/*
	* \breif конструктор с параметрами
	*/
	Orb(const double r) 
	{
		this->r = r;
	}
	/*
	* \breif деструктор по умочанию
	*/
	~Orb()=default;
	/*
	* \breif площадь шара
	*/
	double square() override;
	/*
	* \breif объем шара
	*/
	double volume() override;

};
