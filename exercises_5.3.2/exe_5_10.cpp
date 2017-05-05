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
		switch (c)
		{
			case 'a':
			case 'A':
				acnt++;
				break;
			case 'e':
			case 'E':
				ecnt++;
				break;
			case 'i':
			case 'I':
				icnt++;
				break;
			case 'o':
			case 'O':
				ocnt++;
				break;
			case 'u':
			case 'U':
				ucnt++;
				break;
			default:
				break;
		}
	}
	
	
	cout << acnt << endl;
	cout << ecnt << endl;
	cout << icnt << endl;
	cout << ocnt << endl;
	cout << ucnt << endl;
	
	return 0;
	

}
