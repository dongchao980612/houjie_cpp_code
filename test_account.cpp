#include <iostream>

#include "account.h"

using namespace std;

int main()
{
	Account::set_rate(5.0);
	cout << Account::m_rate << endl;

	Account a;
	a.set_rate(7.0);
	cout << Account::m_rate << endl;
	return 0;

}
