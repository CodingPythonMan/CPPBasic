/*#include <iostream>

class Number
{
	int value;
public:
	Number(int n) : value(n) {}

	int& get(){return value; }
	int get() const { return value; }
};

int main()
{
	Number num(10);
	const Number cnum(10);

	cnum.get();		// 2���� ����
	num.get();		// 1�� ȣ��, ���ٸ�
					// 2�� ȣ��

	num.get() = 20;	// 1�� ȣ�� ok
	//cnum.get() = 20;// 2�� ȣ�� error
}*/