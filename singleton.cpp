#ifndef __SINGLETON_H
#define __SINGLETON_H

class Singleton {
	
public:
	static Singleton& getInstance();
	setup();
	
private:
	Singleton();
	Singleton(const Singleton& rhs);
};
Singleton& Singleton::getInstance(){
	static Singleton slt;
	return slt;
	
}
#endif
