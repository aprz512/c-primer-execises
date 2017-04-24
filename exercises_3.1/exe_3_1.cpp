#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// need to run 
//
int main ()
{
	int s, e;
	
	cout << "input two numbers:" << endl;
	cin >> s >> e;
	
	if (s > e)
	{
		cout << "what the fuck, the min first!!!" << endl;
		return -1;
	}
	
	if (s == e)
	{
		cout << "nothing to output!!!" << endl;
		return -2;
	}
	

	while (++s < e)
	{
		cout << s << endl;
	}
	
	return 0;
}