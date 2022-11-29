/*#include "car.h"

template<typename T> class Ptr
{
	T* pObj;
public:
	Ptr(T* p = 0) : pObj(p) {}

	~Ptr() { delete pObj; }

	T* operator->() {	return pObj;}
	T& operator*() { return *pObj; }
};

int main()
{
	//Ptr p = new Car;
	Ptr<Car> p = new Car;

	p->Go();	// p.operator->()Go()
				// p.operator->()->Go()

	(*p).Go();	// (p.operator*()).Go()
}*/