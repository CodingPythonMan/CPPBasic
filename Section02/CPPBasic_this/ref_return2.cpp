/*struct Point
{
	int x;
	int y;
};
Point pt = { 1,2 };

Point f1()
{
	return pt;
}

Point& f2()
{
	return pt;
	
	//Point p = { 1,1 };
	//return p;// ���� �̷��� �ϸ� �ȵ�.
}

int main()
{
	//f1().x = 10;	// ���Ͽ� �ӽð�ü.x = 10
					// error
	f2().x = 10;	// pt.x = 10 ok
}*/