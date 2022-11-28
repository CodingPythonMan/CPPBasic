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
	//return p;// 절대 이렇게 하면 안됨.
}

int main()
{
	//f1().x = 10;	// 리턴용 임시객체.x = 10
					// error
	f2().x = 10;	// pt.x = 10 ok
}*/