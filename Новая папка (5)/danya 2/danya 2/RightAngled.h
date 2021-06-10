#pragma once
#include "Triangle.h"
class RightAngled : public Triangle
{
private:

public:
	/*
	* \breif конструктор с параметрами для класса rightangled
	*/
	RightAngled(const double a, const double b, const double c);
	/*
	* \breif унаследованный коструктор копирования
	*/
	RightAngled(RightAngled& other) : Triangle(other){}
	/*
	* \breif деструктор по умолчанию
	*/
	~RightAngled() = default;
	/*
	* \brief сеттеры сторон треугольника
	*/
	void set_a(const double a) override;
	void set_b(const double b) override;
	void set_c(const double c) override;
	friend ostream& operator<<(ostream& os, const RightAngled& obj);
	/*
	* \breif функция для сравнения переменых типа double
	*/
	bool double_compare(const double a, const double b);
	/*
	* \breif площадь треугольника
	*/
	double get_square() const;


};
