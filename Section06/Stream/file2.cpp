/*#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::string s;

	std::ifstream fin("../Section06/Stream/file2.cpp");
	//fin >> s;

	std::vector<std::string> v;

	while (std::getline(fin, s))
	{
		v.push_back(s);
	}

	//std::reverse(v.begin(), v.end());
	std::reverse(v[0].begin(), v[0].end());

	for (auto& n : v)
	{
		std::cout << n << std::endl;
	}

	//std::cout << s << std::endl;
}*/