#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
	int ia[10];
	
	for (int i = 0; i < 10; i++)
	{
		ia[i] = i;
	}
	
	for(int i=0; i< 10; i++)
	{
		cout << ia[i] << endl;
	}
	
	return 0;
}
