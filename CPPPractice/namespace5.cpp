#include <filesystem>

int main()
{
	std::filesystem::create_directory("C:/Test");

	if(!std::filesystem::exists("C:/Test/calc.exe"))
	{
		//std::filesystem::copy_file();
	}
}