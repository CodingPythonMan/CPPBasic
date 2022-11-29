/*#include <memory>
#include "car.h"

int main()
{
	//Car* p = new Car;
	//delete p;

	//std::shared_ptr<Car> p1 = new Car;	// error
	std::shared_ptr<Car> p1{ new Car };	// 생성자가 explicit 겠네~
	
	p1->Go();
}*/