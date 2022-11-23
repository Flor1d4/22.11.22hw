#define FIRSTDLL_API extern "C" __declspec(dllexport)

#include "Library.h"
typedef int (*fptr)();

FIRSTDLL_API const double Pi = 3.1415;

FIRSTDLL_API int fooInDll()
{
	int a = 100;
	return a;
}

FIRSTDLL_API int barInDll()
{
	return 0;
}
FIRSTDLL_API double Sum(double a, double b)
{
	double c = a + b;
	return c;
}
FIRSTDLL_API double Min(double a, double b)
{
	double c = a - b;
	return c;
}
FIRSTDLL_API double Mult(double a, double b)
{
	double c = a * b;
	return c;
}
FIRSTDLL_API double Div(double a, double b)
{
	double c = a / b;
	return c;
}