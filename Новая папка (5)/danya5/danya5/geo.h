#pragma once
#include "myexeption.h"
#include <cmath>
/*
* \brief Класс для вычисления суммы геометрической прогресии
*/
class Geo 
{
private:
	/*
	* \brief Сумма и элементы геометрической прогресии
	*/
	double element1;
	double element2;
	double sum;
public:
	/*
	* \brief Конструктор с параметрами класса Geo
	*/
	Geo(const double el,const double el2,const double n)
	{
		this->sum = (el - (el*pow((el2 / el), n))) / (1 - (el2/el));
		this->element1 = el;
		this->element2 = el2;
	}
	/*
	* \brief Деструктор по умолчанию
	*/
	~Geo() = default;
	/*
	* \brief Геттер суммы геом. прогресии
	*/
	double get_sum() const;
	/*
	* \brief Функция без спецификации исключений
	*/
	double noexp() const;
	/*
	* \brief Функция со спецификацией throw();
	*/
	double w_throw() const throw();
	/*
	* \brief Функция с конкретной спецификацией с подходящим стандартным исключением
	*/
	double invalid() const throw(invalid_argument);
	/*
	* \brief спецификация с собственным реализованным исключением: как пустой клас
	*/
	double empty() const throw(empty_exeption);
	/*
	* \brief спецификация с собственным реализованным исключением: как независимый класс с полями-параметрами функции
	*/
	double my_exp1()const throw(my_exeption1);
	/*
	* \brief спецификация с собственным реализованным исключением: как наследник от стандартного исключения с полями
	*/
	double my_exp2()const throw(my_exeption2);

};