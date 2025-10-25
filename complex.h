#ifndef __COMPLEX__H
#define __COMPLEX__H

#include <ostream>

class Complex
{
public:
	Complex(double r = 0, double i = 0) : re(r), im(i)
	{
	}


	double real() const
	{
		return re;
	}
	void real(double r)
	{
		re = r;
	}
	double imag() const
	{
		return im;
	}
	void imag(double i)
	{
		im = i;
	}

	Complex operator+(const Complex& x)
	{
		return Complex(this->re + x.real(), this->im + x.imag());
	}
	
	friend Complex operator+(const double x, const Complex& y)
	{
		return Complex(x + y.real(), y.imag());
	}
	
	friend Complex operator+(const Complex& x, const double y)
	{
		return Complex(x.real() + y, x.imag());
	}
	


private:
	double re, im;


};

std::ostream &operator<<(std::ostream &os, const Complex &x)
{
	os << "(" << x.real() << "," << x.imag()<< ")";
	return os;
}
#endif
