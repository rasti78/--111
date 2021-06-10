#include "RightAngled.h"
#include <iostream>
void main()
{
	setlocale(LC_ALL, "ru");
	RightAngled one(3, 4, 5);
	cout << one << "\n";
	Triangle second(one);
	cout << second;
}