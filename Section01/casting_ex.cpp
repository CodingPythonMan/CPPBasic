/*int main()
{
	const int c = 10;

	char* p1 = (char*)&c;

	// �� �ڵ�� �����ϰ� �����ϴ� ĳ���� �ڵ带 C++�� �ۼ��غ�����
	// char* p2 = const_cast<char*>(&c); // error int* => char* �ȵ�
	char* p2 = reinterpret_cast<char*>(const_cast<int*>(&c));
	char* p3 = const_cast<char*>(reinterpret_cast<const char*>(&c));
}*/