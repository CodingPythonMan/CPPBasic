/*#include <iostream>

template<class F, class T>
void call(F f, T arg)
{
	f(arg);
}

void foo(int a) {}
void goo(int* p) {}

int main()
{
	foo(10);
	goo(0);

	call(foo, 10);
	//call(goo, 0); // goo(0) ==> goo(arg) // error
	call(goo, nullptr);
}*/