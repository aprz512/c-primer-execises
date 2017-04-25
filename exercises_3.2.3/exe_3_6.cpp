#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str = "Hello world!!!";

	cout << str << endl;

	// 注意要使用引用
	// 不使用auto 使用 char 也没问题
	for (auto &c : str)
	{
		c = 'x';
	}

	cout << str << endl;

	return 0;
}