/*#include <iostream>

class Point
{
public:
	int x;
	int y;

	Point(int a, int b) : x(a), y(b) 
	{
		std::cout << "ctor" << std::endl;
	}

	// ����ڰ� ����� ���� ������
	explicit Point(const Point& p) : x(p.y), y(p.x)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

int main()
{
	Point p1(1, 2); // ������
	Point p2(p1);	// ���� ������
	Point p3{ p1 }; // ���� �ʱ�ȭ
	//Point p4 = { p1 }; // ���� �ʱ�ȭ
	//Point p5 = p1;
}*/