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

	// C++98 시절부터 struct 키워드를 표기하지 않아도 된다.
	// C++ 11 멤버에 디폴트 초기값을 지정 할 수 있다.

	auto [x, y] = pt2;
	// Structure Binding 은 C++ 17 가능.

	int arr[3] = { 1,2,3 };
	auto [a, b, c] = arr;
	// int a = arr[0]

	auto ret = foo();
	auto [x1, y1] = foo();
}*/