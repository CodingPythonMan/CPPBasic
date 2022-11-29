/*#include <iostream>
class Point
{
	int x;
	int y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void print() const
	{
		std::cout << x << ", " << y << std::endl;
	}

	Point& operator++()
	{
		++x;
		++y;
		return *this;
	}
	//const Point operator++(int) 
	Point operator++(int) 
	{  
		Point temp{ *this };
		
		++(*this); // 전위형 호출

		return temp;
	}
};

int main()
{
	int n = 0;
	//n++++; // error

	Point p(1, 1);
	Point ret = p++;
	//p++++; // (p++)++ (p.operator++(int)).operator++(int)

	p.print();
	ret.print();
}*/