#include "Point.h"
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	Point one(2, 2);
	cout << one.begin() << "\n";
	Point two(3, 3);
	cout << one.range(two) << "\n";
	cout << one.polar() << "\n";
	cout << one.compare(two) << "\n";
	cout << one << endl;
}