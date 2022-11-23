#include <iostream>

#include"../MyLib1/Library.h"

using namespace std;
typedef double (*fptr) (double, double);
int main()
{
	double a, b=0;
	char c;
	cin >> a;
	cin >> b;
	cin >> c;
	
	if (c == '+')
	{
		cout << Sum(a, b) << endl;
    }
	else if (c == '-') {
		cout << Min(a, b) << endl;
	}
	else if (c == '*') {
		cout << Mult(a, b) << endl;
	}

	else if (c == '/') {
		cout << Div(a, b) << endl; 
	}
	
	
}
