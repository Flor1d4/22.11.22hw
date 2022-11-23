#pragma once
#ifndef FIRSTDLL_API
#define FIRSTDLL_API extern "C" __declspec(dllimport)
#endif // !FIRSTDLL_API

FIRSTDLL_API int fooInDll();
FIRSTDLL_API int barInDll();
FIRSTDLL_API const double Pi;
FIRSTDLL_API double Sum(double a, double b);
FIRSTDLL_API double Min(double a, double b);
FIRSTDLL_API double Mult(double a, double b);
FIRSTDLL_API double Div(double a, double b);
