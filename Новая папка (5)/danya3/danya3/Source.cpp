#include "pyramid.h"
#include "orb.h"
#include "Cone.h"
#include <iostream>
void main()
{
	Pyramid one(3, 2,4);
	cout << one.square() << "\n";
	cout << one.volume() << "\n";
	Cone second(4, 5, 6);
	cout << second.square() << "\n";
	cout << second.volume() << "\n";
	Orb third(5);
	cout << third.square() << "\n";
	cout << third.volume() << "\n";


}