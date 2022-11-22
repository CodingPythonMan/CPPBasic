/*#include <filesystem>

int main()
{
	std::filesystem::create_directory("C:/Test");

	if(!std::filesystem::exists("C:/Test/calc.exe"))
	{
		std::filesystem::copy_file("C:/Windows/system32/calc.exe", "C:/Test/calc.exe");
	}

	namespace fs = std::filesystem;

	fs::create_directories("C:/Test");

	if (!fs::exists("C:/Test/calc.exe"))
	{
		fs::copy_file("C:/Windows/system32/calc.exe", "C:/Test/calc.exe");
	}
}*/