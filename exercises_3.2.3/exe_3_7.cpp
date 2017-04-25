#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str = "Hello world!!!";

	cout << str << endl;

	for (char c : str)
	{
		c = 'x';
	}

	// 输出结果 字符串没有变化 ，因为没有使用引用
	cout << str << endl;

	return 0;
}