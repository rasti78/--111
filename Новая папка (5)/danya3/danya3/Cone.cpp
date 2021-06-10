#include "Cone.h"
double Cone::square() { return get_pi() * pow(r, 2) + get_pi() * l;
}
double Cone::volume() { return   (get_pi() * pow(r, 2) * h)/3; }