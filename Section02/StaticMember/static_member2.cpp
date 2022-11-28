/*class Object
{
	int idata{ 0 };
	static int sdata;
public:
	void ifunc() 
	{
		idata = 10;
		sdata = 10;
		sfunc();
	}
	static void sfunc() 
	{
		//idata = 10; //error
		sdata = 10;
		//ifunc(); // error
	}
};
int Object::sdata{ 0 };

int main() {
	Object::sfunc();

	Object obj;
	obj.ifunc();
}*/