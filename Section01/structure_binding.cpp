/*struct Point
{
	int x = 1;
	int y{ 2 };
};

Point foo()
{
	Point p = { 1,2 };
	return p;
}

int main()
{
	struct Point pt1;
	Point pt2 = { 3,4 };

	// C++98 �������� struct Ű���带 ǥ������ �ʾƵ� �ȴ�.
	// C++ 11 ����� ����Ʈ �ʱⰪ�� ���� �� �� �ִ�.

	auto [x, y] = pt2;
	// Structure Binding �� C++ 17 ����.

	int arr[3] = { 1,2,3 };
	auto [a, b, c] = arr;
	// int a = arr[0]

	auto ret = foo();
	auto [x1, y1] = foo();
}*/