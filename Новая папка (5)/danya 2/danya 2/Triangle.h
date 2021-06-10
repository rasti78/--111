#pragma once
#include <ostream>
#include <cmath>
using namespace std;
/*
* \brief Родительский класс Triangle
*/
class Triangle 
{
private:
protected:
	/*
	* \brief Стороны треугольника и константы для расчетов
	*/
	double a;
	double b;
	double c;
	const double pi = 3.14159265358979323846;
	const int sum_angle = 180;
	/*
	* \breif Конструктор по умолчанию
	*/
	Triangle() = default;
public:
	/*
	* \brief Конструктор с параметрами
	*/
	Triangle(const double a,const double b, const double c);
	/*
	* \brief Конструктор копирования по умолчанию
	*/
	Triangle(Triangle &other)= default;
	/*
	* \brief Диструктор по умочанию
	*/
	~Triangle() = default;
	/*
	* \breif дружественная функция для вывода информации о треугольнике
	*/
	friend ostream& operator<<(ostream& os, const Triangle& obj);
	/*
	* \breif сеттеры сторон треугольника
	*/
	virtual void set_a(const double a);
	virtual void set_b(const double b);
	virtual void set_c(const double c);
	/*
	* \breif Геттеры сторон треугольника
	*/
	double get_a() const;
	double get_b() const;
	double get_c() const;
	/*
	* \breif проверка треугольника на вырожденность
	*/
	bool proportion(const double a, const double b, const double c);
	/*
	* \brief функция нахождения угола альфа
	*/
	double angle_a() const;
	/*
	* \brief функция нахождения угола бетта
	*/
	double angle_b() const;
	/*
	* \brief функция нахождения угола гамма
	*/
	double angle_y() const;
	/*
	* \breif периметр треугольника
	*/
	double perimetr() const;
};
