/*#include <iostream>

class Point
{
public:
	int xpos, ypos;

	Point(int x, int y) : xpos{ x }, ypos{ y } {}

	void set(int x, int y)
	{
		xpos = x;
		ypos = y;
	}

	void print() const
	{
		std::cout << xpos << ", " << ypos << std::endl;
	}
};

int main()
{
	const Point pt(1, 2);

	//pt.xpos = 10;	// error. public 이지만 상수이므로 에러
	//pt.set(10, 20);		// error.
	pt.print();			// ok
}*/