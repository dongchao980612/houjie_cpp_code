#ifndef __ACCOUNT_H
#define __ACCOUNT_H

class Account {
public:
	static double m_rate;
	static void set_rate(const double rate) {
		m_rate = rate;
	}
};

double Account::m_rate = 0.0;
#endif
