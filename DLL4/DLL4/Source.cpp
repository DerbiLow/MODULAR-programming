#include <iostream>
#include <math.h>
#include <cmath>
extern "C" __declspec(dllexport) 

int sum(int a)
{
	float f = log(fabs(cos(a) + sin(a)));
	return f;
}