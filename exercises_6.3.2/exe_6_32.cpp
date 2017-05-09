#include <iostream>

using std::cout;
using std::endl;

// 合法的
int &get(int *arry, int index)
{
	return arry[index];
}

int main()
{
	int ia[10];
	for (int i=0; i != 10; ++i)
	{
		get(ia, i) = i;
	
	}
	
	int  i = 33;
	int * p = &i;
	
	cout << p[0] << endl;
	
	

	return 0;
}
