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

	// 사용자가 만드는 복사 생성자
	explicit Point(const Point& p) : x(p.y), y(p.x)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

int main()
{
	Point p1(1, 2); // 생성자
	Point p2(p1);	// 복사 생성자
	Point p3{ p1 }; // 직접 초기화
	//Point p4 = { p1 }; // 복사 초기화
	//Point p5 = p1;
}*/