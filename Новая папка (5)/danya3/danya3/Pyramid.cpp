#include "pyramid.h"
double Pyramid::square() { return pow(a, 2) + 2 * a * sqrt(pow(b, 2) - (pow(a, 2) / 4)); }
double Pyramid::volume() { return (h*pow(a,2))/(4*sqrt(3)); }