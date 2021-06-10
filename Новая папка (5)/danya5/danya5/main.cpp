#include "geo.h"
void main() 
{
	setlocale(LC_ALL, "ru");
	double a, b, n;
	cout << "Введите два любых элемента геом прогресии один за другим:" << "\n";
	cin >> a >> b;
	cout << "Сумму скольки элементво вы хотите получить?" << "\n";
	cin >> n;
	Geo first(a, b, n);
	try
	{
		cout << first.noexp() << "\n";
	}
	catch (...)
	{
		cout << "Произошло исключение в функции noexep" << endl;
	}
	try
	{
		cout << first.w_throw() << "\n";
	}
	catch (...)
	{
		cout << "Произошло исключение в функции empty" << endl;
	}
	try
	{
		first.invalid();
	}
	catch (invalid_argument& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		first.empty();
	}
	catch (empty_exeption)
	{
		cout << "Произошло исключение empty_exeption в функции " << endl;
	}
	try
	{
		first.my_exp1();
	}
	catch (my_exeption1& e)
	{
		cout << e.message() << endl;
	}
	try
	{
		first.my_exp2();
	}
	catch (my_exeption2& e)
	{
		cout << e.what() << " " << e.arg() << endl;
	}

}