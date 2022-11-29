/*#include <iostream>

class Shape
{
public:
	virtual void Draw() { std::cout << "Shape::Draw" << std::endl; }
};

class Rect : public Shape
{
public:
	virtual void Draw() { std::cout << "Rect::Draw" << std::endl; }
};

int main()
{
	Shape s; s.Draw();	// Shape::Draw
	Rect r; r.Draw();	// Rect::Draw

	Shape* p = &r;

	//------------------
	//int n = 0;
	//std::cin >> n;
	//if (n == 1) p = &s;
	//-----------------

	// 아래 코드를 컴파일 할 때
	// p 가 어느객체를 가리킬지 컴파일러가 알 수 있을까?
	p->Draw();			// Rect::Draw
}*/