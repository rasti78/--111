#pragma once
#include <stdlib.h>
#include <cmath>
#include <string>
#include <ostream>
using namespace std;
/*
* \breif структура для полярных координат
*/

struct polaris
{
	double r;
	double fi;
	friend ostream& operator<<(ostream& os, const polaris& obj);
};
/*
* \breif класс поинт
*/
class Point
{
private:
	/*
	* \breif координаты и константа
	*/
	double x;
	double y;
	const double pi = 3.14159265358979323846;
public:
	/*
	* \breif конструктор с параметрами
	*/
	Point(const double x, const double y)
	{
		this->x = x;
		this->y = y;
	}
	/*
	* \breif конструктор копирования
	*/
	Point(Point& other) = default;
	/*
	* \breif деструктор по умолчанию
	*/
	~Point() = default;
	/*
	* \breif функция вывода
	*/
	friend ostream& operator<<(ostream& os, const Point& obj);
	/*
	* \breif сеттеры координат
	*/
	void set_x(const double x)
	{
		this->x = x;
	}
	void set_y(const double y)
	{
		this->y = y;
	}
	/*
	* \breif геттеры координат
	*/
	double get_x() const;
	double get_y() const;
	/*
	* \breif начало координат
	*/
	double begin() const;
	/*
	* \brief растояние между координатами
	*/
	double range(const Point& other);
	/*
	* \breif сравнение координат
	*/
	string compare(const Point& other);
	/*
	* \breif сравнение даблов
	*/
	bool double_compare(const double value_a, const double value_b) const;
	/*
	* полярные координаты точек
	*/
	polaris polar() const;
};