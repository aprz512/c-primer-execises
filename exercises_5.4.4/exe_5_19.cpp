#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string str1, str2, oStr;
	do {
	
		cin >> str1 >> str2;
		
		oStr = str1.size() > str2.size() ? str1 : str2;
		
		cout << oStr << endl;
		
	} while (cin);
	
	
	
	return 0;
}
