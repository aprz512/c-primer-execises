#include <iostream>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::istringstream;
using std::string;

// 这个代码没测试过，因为虚拟机下面不知道怎么输入 EOF，FUCK
istream &read(istream &is)
{
	while (is)
	{
		string word;
		is >> word;	
		cout << word << endl;
	}
	
	is.clear(is.rdstate() & ~is.eofbit);
	
	return is;
}

int main()
{
	istringstream ss1("-------------   00000000000        999999999999  4");

	read(ss1);
	

	return 0;
}
