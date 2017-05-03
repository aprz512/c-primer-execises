#include <iostream>

using std::cout;

int main()
{
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char s[] = "world";
	const char *cp = ca;
	while (*cp) {
		cout << *cp;
		++cp;
	}
	
	// 按道理说，这应该是未定义的输出，虽然可以输出数组所有字符
	// 但是没有结束符号啊
	
	return 0;
	
}
