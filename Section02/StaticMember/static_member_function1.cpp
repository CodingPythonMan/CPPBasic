/*#include <iostream>

class Car
{
	int speed{ 0 };
	static int count;
public:
	Car() { ++count; }
	~Car() { --count; }

	static int get_count() { return count; }
};
int Car::count{ 0 };

int main()
{
	// 여기서 Car 객체의 갯수를 알고 싶다.

	Car c1;
	Car c2;

	// Car::count = 100; // error
	std::cout << Car::get_count() << std::endl;
}*/