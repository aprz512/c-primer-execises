#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

	int acnt, ecnt, icnt, ocnt, ucnt;
	char c;
	
	acnt = ecnt = icnt = ocnt = ucnt = 0;
	
	while (cin >> c)
	{
		if ('a' == c)
		{
			acnt++;
		}
		else if ('e' == c)
		{
			ecnt++;
		}
		else if('i' == c)
		{
			icnt++;
		}
		else if ('o' == c)
		{
			ocnt++;
		}
		else if ('u' == c)
		{
			ucnt++;
		}
		else
		{
			// nothing
		}
	}
	
	cout << acnt << endl;
	cout << ecnt << endl;
	cout << icnt << endl;
	cout << ocnt << endl;
	cout << ucnt << endl;
	
	return 0;
	

}
