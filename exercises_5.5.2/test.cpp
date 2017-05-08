#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int i = 9;
	switch(i)
	{
	
		case 8:
			//j = 8;
			//cout << j << endl;
			break;
			
		case 0:
			// 不能跨过初始化语句
			int j = 0;
			//int j;
			break;
			
		case 9:
			j = 10;
			
			cout << j << endl;
			
			break;
			
			
	}
	
	
	
	return 0;
}
