/*#include <iostream>
#include <vector>
using namespace std;

class Shape
{
public:
	virtual void Draw() { cout << "Shape::Draw" << std::endl; }
};

class Rect : public Shape
{
public:
	virtual void Draw() { cout << "Rect::Draw" << endl; }
};

class Circle : public Shape
{
public:
	virtual void Draw() { cout << "Circle::Draw" << endl; }
};

int main()
{
	vector<Shape*> v;

	while (true)
	{
		int cmd;
		cin >> cmd;

		if (cmd == 1) v.push_back(new Rect);
		else if (cmd == 2) v.push_back(new Circle);
		else if (cmd == 9)
		{
			for (auto p : v) // p�� Shape* Ÿ��
			{
				p->Draw();
			}
		}
	}
}*/