/*#include <iostream>
#include <cstring>
using namespace std;

class String
{
	char* buff;
	int size;
public:
	String(const char* s)
	{
		size = strlen(s);
		buff = new char[size + 1];
		strcpy_s(buff, size + 1, s);
	}
	~String() { delete[] buff; }

	String(const String& s) : size(s.size)
	{
		buff = new char[size + 1];
		strcpy_s(buff, size + 1, s.buff);
	}

	String& operator=(const String& s)
	{
		// ���� �����ڴ� �ڽŰ��� ������ �����ؾ� �Ѵ�.
		if (&s == this)
		{
			return *this;
		}

		size = s.size;

		delete[] buff;

		buff = new char[size + 1];
		strcpy_s(buff, size + 1, s.buff);

		return *this;
	}

	friend ostream& operator<<(ostream& os, const String& s);
};

ostream& operator<<(ostream& os, const String& s)
{
	return os << s.buff;
}

int main()
{
	String s1 = "hello";
	
	s1 = s1;

	cout << s1 << endl;
}*/