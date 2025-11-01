#include <iostream>

#include "string.h"

using namespace std;

int main()
{

	String s1(0);
	String s2("你好");

	String s3(s1);
	s3 = s2;

	cout <<"s3 = "<< s3 << endl;
	s3 = s2;

	cout <<"s1 = "<< s1 << endl;
	cout <<"s1 = "<< s2 << endl;
	cout <<"s3 = "<< s3 << endl;

	return 0;

}
