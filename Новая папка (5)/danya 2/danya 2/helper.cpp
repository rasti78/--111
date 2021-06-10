#include "RightAngled.h"
bool RightAngled::double_compare(const double a, const double b)
{
	return abs(a - b) <= numeric_limits<double>::min();
}