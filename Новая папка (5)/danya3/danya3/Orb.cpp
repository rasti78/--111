#include "Orb.h"
double Orb::square() { return 4 * get_pi() * pow(r, 2); }
double Orb::volume() { return (4 * get_pi() * pow(r, 3)) / 3; }