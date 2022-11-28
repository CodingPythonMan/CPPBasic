/*#include <iostream>

#ifdef __cplusplus
	#define NULL 0
#else
	#define NULL (void*)0
#endif

void foo(int n) { std::cout << "int" << std::endl; }
void foo(void* p) { std::cout << "void*" << std::endl; }
void goo(char* p) { std::cout << "char*" << std::endl; }

int main()
{
	foo(0);
	foo((void*)0);
	//foo(NULL);

	//goo(0);
	//goo(NULL);	// C¾ð¾î : ok, C++ : error

	foo(nullptr);
	goo(nullptr);
}*/