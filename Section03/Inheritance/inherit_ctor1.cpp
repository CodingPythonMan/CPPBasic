/*#include <iostream>

class Base
{
	int data;
public:
	Base() { std::cout << "Base()" << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};

class Derived :public Base
{
public:
	Derived() { std::cout << "Derived()" << std::endl; }
	Derived(int a) : Base(a) { std::cout << "Derived(int)" << std::endl; }
	~Derived() { std::cout << "~Derived()" << std::endl; }
};

int main()
{
	//Derived d;
	Derived d(5);
}*/