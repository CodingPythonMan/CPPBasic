/*#include <iostream>

int main()
{
	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (std::cin.fail())
		{
			std::cout << "실패" << std::endl;

			// cin 의 상태를 나타내는 비트를 reset
			std::cin.clear();

			// 입력 버퍼를 지운다.
			//std::cin.ignore();
			std::cin.ignore(256, '\n');

			continue;
		}
		break;
	}

	std::cin >> n;

	std::cout << n << std::endl;
}*/