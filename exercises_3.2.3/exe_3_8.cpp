#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string str = "Hello world!!!";

	cout << str << endl;

	decltype(str.size()) index = 0;
	decltype(str.size()) size = str.size();


	while (index < size)
	{
		str[index] = 'x';
		index++;
	}


/*
	for (decltype(str.size()) index = 0; index < str.size(); index++)
	{
		str[index] = 'x';
	}
*/

	// 我是更喜欢 for 循环
	// 变化条件都在一起
	cout << str << endl;

	return 0;
}
