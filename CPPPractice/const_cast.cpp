/*#include <iostream>

int main()
{
	const int n = 10;

	//int* p1 = static_cast<int*>(&n); // error
	//int* p2 = reinterpret_cast<int*>(&n);
	int* p3 = const_cast<int*>(&n);

	// *p3 = 20; 역참조는 굉장히 위험.
}*/