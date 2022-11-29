/*#include <iostream>

// 인터페이스
class ICamera
{
public:
	virtual void take() = 0;
};

class Camera : public ICamera
{
public:
	void take()
	{
		std::cout << "take picture" << std::endl;
	}
};

class HDCamera : public ICamera
{
public:
	void take()
	{
		std::cout << "take picture hd" << std::endl;
	}
};

class People
{
public:
	void useCamera(ICamera* p) { p->take(); }
};

int main()
{
	Camera camera;
	HDCamera hdcamera;

	camera.take();
	hdcamera.take();
}*/