#include <iostream>

#include "complex.h"

using namespace std;

int main()
{
	Complex c1(1, 1);
	Complex c2(2, 2);
	Complex c3(c2);
	
	cout << c3.get_real() << "\t" << c3.get_imag() << endl;

	Complex c4 = c1 + c2;
#if 1
	cout << c3 << endl;
	cout << c1 + 2.0 << endl;
	cout << 2.0 + c1 << endl;

	cout << c3 << endl;
#endif
	return 0;
}
