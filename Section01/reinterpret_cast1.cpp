/*#include <iostream>

int main()
{
	int n = 10;

	//char* p1 = static_cast<char*>(&n); // error
	char* p2 = reinterpret_cast<char*>(&n);

	//char& r1 = static_cast<char&>(n);// error
	char& r1 = reinterpret_cast<char&>(n);// error

	//int* p3 = static_cast<int*>(1000); // error
	int* p4 = reinterpret_cast<int*>(1000);

	//double d = reinterpret_cast<double>(3);
}*/