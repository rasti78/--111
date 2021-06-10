#pragma once
#include <ostream>
#include <cmath>
using namespace std;
/*
* \brief виртуальный класс для наследования
*/
class Figures
{private:
	/*
	* \brief константа для расчетов
	*/
	const double pi = 3.14159265358979323846;
public:
	/*
	* \breif виртуальная функция для нахождения объема
	*/
	virtual double volume() = 0;
	/*
	* \breif виртуальная функция для нахождиения обьема
	*/
	virtual double square() = 0;
	/*
	* \breif деструктор по умолчанию
	*/
	~Figures() = default;
	/*
	* \breif геттер для числа пи
	*/
	double get_pi();
};