#include  <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::istream;

// 这个代码没测试过，因为虚拟机下面不知道怎么输入 EOF，FUCK
istream &read(istream &is)
{
	while (is)
	{
		// nothing	
	}
	
	is.clear(is.rdstate() & ~is.eofbit);
	
	return is;
}

int main()
{
	
	int i;
	read(cin) >> i;
	cout << i << endl; 

	return 0;
}
