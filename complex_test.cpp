#include <iostream>

#include "complex.h"

using namespace std;

int main()
{
	Complex c1(2, 1);
	Complex c2(3, 4);

	Complex c3 = c1 + c2;
	cout << c3 << endl;
	cout << c1 + 2.0 << endl;
	cout << 2.0 + c1 << endl;

	return 0;
}
