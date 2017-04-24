#include <iostream>
#incldue <string>

using std::string;
using std::cin;
using std::endl;
using std::cout;

int main() 
{
	
	string line;
	
	// 第一行
	while (getline(cin, line)) 
	{
		cout << line << endl;
	}
	
	// 读一个单词
	while (cin >> line) 
	{
		cout << line << endl;
	}
	
	return 0;
}