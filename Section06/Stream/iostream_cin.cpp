/*#include <iostream>

int main()
{
	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (std::cin.fail())
		{
			std::cout << "����" << std::endl;

			// cin �� ���¸� ��Ÿ���� ��Ʈ�� reset
			std::cin.clear();

			// �Է� ���۸� �����.
			//std::cin.ignore();
			std::cin.ignore(256, '\n');

			continue;
		}
		break;
	}

	std::cin >> n;

	std::cout << n << std::endl;
}*/