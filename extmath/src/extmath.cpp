#include "math.h"
#include "extmath.h"
int add(int a, int b, int c, int d)
{
	int ab = add(a, b);
	int cd = add(c, d);
	return add(ab, cd);
}