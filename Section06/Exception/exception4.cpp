/*#include <iostream>

class FileNotFound : public std::exception
{
public:
	virtual const char* what() const noexcept
	{
		return "FIle not found";
	}
};

void foo()
{
	throw FileNotFound();
}

int main()
{
	try
	{
		foo();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}*/