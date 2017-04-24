#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main ()
{
	string str1, str2;
	cin >> str1 >> str2;
	if (strl == str2)
	{
		cout << "two string equals:" << str1 << endl;
	} 
	else 
	{
		if (str1 < str2) 
		{
			cout << str2 << endl;
		}
		else 
		{
			cout << str1 << endl;
		}
	}
	
	decltype(str1.size()) size1 = strl.size();
	decltype(str1.size()) size2 = str2.size();
	if (size1 == size2)
	{
		cout << "size is the same !" << endl;
	}
	else
	{
		if(size1 < size2)
		{
			cout << str2 << endl;
		}
		else
		{
			cout << str1 << endl;
		}
	}
	
	return 0;
}