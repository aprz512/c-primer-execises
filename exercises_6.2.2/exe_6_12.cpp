#include <iostream>

using std::cout;
using std::endl;

void exchValue(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int x = 9;
	int y = 10;
	
	cout << x << "---" << y << endl;
	
	// 使用引用更方便撒
	exchValue(x, y);
	
	cout << x << "---" << y << endl;
	
	return 0;
}
