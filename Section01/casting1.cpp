/*#include <iostream>
#include <cstdlib>

int main()
{
	int* p1 = (int*)malloc(sizeof(int) * 10);
	free(p1);

	int n = 10;
	// double* p2 = &n; // error
	double* p2 = (double*) & n; 
	*p2 = 3.4;

	const int c = 10;
	// int* p3 = &c; // error
	int* p3 = (int*) & c;
	*p3 = 20;
	std::cout << c << std::endl;
}*/