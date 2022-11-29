/*#include <iostream>
#include <typeinfo>

int main()
{
	//std::type_info t2; // error

	auto n1 = 10;

	const std::type_info& t1 = typeid(n1);
	const std::type_info& t2 = typeid(int);

	if (t1 == t2)
	{
		std::cout << "n1Àº int" << std::endl;
	}

	if (typeid(n1) == typeid(int))
	{

	}

	std::cout << t1.name() << std::endl;
}*/