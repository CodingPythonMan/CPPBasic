/*#include <iostream>

class Point
{
public:
	int x;
	int y;

	Point() : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}

	// ����ڰ� ����� ���� ������
	Point(const Point& p) : x(p.y), y(p.x)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

int main()
{
	Point p1;
	Point p2(1, 2);
	//Point p3(1);	// error
	Point p4(p2);	// ok

	std::cout << p4.x << std::endl;
	std::cout << p4.y << std::endl;
}*/