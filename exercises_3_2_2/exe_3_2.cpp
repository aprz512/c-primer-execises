#include <iostream>
#incldue <string>

using std::string;
using std::cin;
using std::endl;
using std::cout;

int main() 
{
	
	string line;
	
	// ��һ��
	while (getline(cin, line)) 
	{
		cout << line << endl;
	}
	
	// ��һ������
	while (cin >> line) 
	{
		cout << line << endl;
	}
	
	return 0;
}