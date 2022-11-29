/*class Shape
{
public:
	int color;
};

class Rect : public Shape
{
public:
	int x, y, w, h;
};

// 인자로 전달된 도형을 검정색을 변경하는 함수
void changeBlack(Rect* p)
{
	p->color = 0;
}

//어떤 함수를 만들 때 기반 클래스로 만들면
//밑 파생클래스를 모두 받을 수 있다.
//void changeBlack(Triangle* p)
//{
//	p->color = 0;
//}

int main()
{
	Rect r;
	changeBlack(&r);

	Rect* buffer[10];	// 사각형만 보관
	Shape* buffer[10];	// 모든 도형 보관
}*/