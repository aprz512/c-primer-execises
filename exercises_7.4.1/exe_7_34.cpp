#include <iostream>
#include <string>


class Screen{
public:
	typedef std::string::size_type pos;

	void dummy_fcn(pos height)
	{
		cursor = width * height;
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	//typedef std::string::size_type pos;
};

int main()
{
	Screen s;
	return 0;
}

// 放在最下面，用到pos的地方都会报错
