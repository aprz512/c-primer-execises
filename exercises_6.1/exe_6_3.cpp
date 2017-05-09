#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int fact(int val)
{
	int temp = 1;
	while (val > 1)
	{
		temp *= val--;
	}
	
	return temp;
}

int main()
{

	cout << fact(4) << endl;
	
	return 0;
	
}


