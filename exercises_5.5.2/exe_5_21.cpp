#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str, preStr;
	
	while (cin >> str)
	{
		if (!isupper(str[0]))
		{
			continue;
		}
		
		if (preStr == str)
		{
			cout << str + " 出现了2次了!!!" << endl;
			break;
		}
		
		preStr = str;
	}
	
	if (cin.eof()) 
	{
		cout << "没有重复出现的。" << endl;
	}
	
	return 0;
}
