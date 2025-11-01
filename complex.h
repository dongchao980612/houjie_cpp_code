#ifndef __COMPLEX_H
#define __COMPLEX_H

#include <iostream>
#include <ostream>

using namespace std;

class Complex
{
public:
	// 构造函数
	Complex(double r = 0, double i = 0) : m_re(r), m_im(i)
	{
		// cout << "构造函数被调用..." << endl;
	}

	//  拷贝构造函数
	Complex(const Complex & c)
	{
		this->m_im = c.m_im ;
		this->m_re = c.m_re ;
		// cout << "拷贝构造函数被调用..." << endl;
	}

	double get_real() const
	{
		return m_re;
	}
	void set_real(double r)
	{
		m_re = r;
	}
	double get_imag() const
	{
		return m_im;
	}
	void set_imag(double i)
	{
		m_im = i;
	}

	Complex operator+(const Complex& x)
	{
		return Complex(this->m_re + x.m_re, this->m_im + x.m_im);
	}

	friend Complex operator+(const double x, const Complex& y)
	{
		return Complex(x + y.m_re, y.m_im);
	}

	friend Complex operator+(const Complex& x, const double y)
	{
		return Complex(x.m_re + y, x.m_im);
	}

private:
	double m_re, m_im;


};

std::ostream &operator<<(std::ostream &os, const Complex &x)
{
	os << "(" << x.get_real() << "," << x.get_imag() << ")";
	return os;
}
#endif
