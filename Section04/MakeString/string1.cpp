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

	friend ostream& operator<<(ostream& os, const String& s);
};

ostream& operator<<(ostream& os, const String& s)
{
	return os << s.buff;
}

int main()
{
	String s1 = "hello";

	cout << s1 << endl;
}*/