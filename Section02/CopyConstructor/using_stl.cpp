#include <iostream>
#include <cstring>

class Person
{
	std::string name;
	int age;
public:
	Person(std::string n, int a) : name(n), age(a){}
};

int main()
{
	Person p1("kim", 20);
	Person p2 = p1;	// 컴파일 에러가 나오게 하자.
}