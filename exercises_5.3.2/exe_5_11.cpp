#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

	int acnt, ecnt, icnt, ocnt, ucnt, spaceCnt, tabCnt, enterCnt;
	char c;
	
	acnt = ecnt = icnt = ocnt = ucnt = spaceCnt = tabCnt = enterCnt = 0;
	
	while (cin >> std::noskipws >> c) 
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
			case ' ':
				spaceCnt++;
				break;
			case '\n':
				enterCnt++;
				break;
			case '\t':
				tabCnt++;
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
	cout << spaceCnt << endl;
	cout << tabCnt << endl;
	cout << enterCnt << endl;
	
	return 0;
	

}
