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

	// �Ʒ� �ڵ带 ������ �� ��
	// p �� �����ü�� ����ų�� �����Ϸ��� �� �� ������?
	p->Draw();			// Rect::Draw
}*/