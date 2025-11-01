#ifndef __STRING_H
#define __STRING_H

#include <iostream>
#include <string.h>

using namespace  std;

class String {
private:
	char* m_cstr;
public:
	// 构造函数
	String(const char* cstr = 0) {
		cout << "构造函数被调用..." << endl;
		if (cstr) {
			m_cstr = new char[strlen(cstr)];
			strcpy(m_cstr, cstr);
		} else {
			m_cstr = new char[1];
			*m_cstr = '\0';
		}
	}

	// 拷贝构造函数
	String(const String& str) {
		cout << "拷贝构造函数被调用..." << endl;
		m_cstr = new char(strlen(str.m_cstr) +1);
		strcpy(m_cstr, str.m_cstr);
	}

	// 拷贝赋值函数
	String operator=(const String & str) {
				cout << "拷贝复制函数被调用..." << endl;
		if (this == &str) {
			return *this;
		}
		delete[] m_cstr;
		m_cstr=new char[strlen(str.m_cstr)+1];
		strcpy(m_cstr,str.m_cstr);
		return *this;
	}

	// 析构函数
	~String() {
		delete[] m_cstr;
	}

	char* get_c_str() const {
		return m_cstr;
	}

};

std::ostream &operator<<(std::ostream &os, const String &str)
{
	os <<str.get_c_str();
	return os;
}
#endif
