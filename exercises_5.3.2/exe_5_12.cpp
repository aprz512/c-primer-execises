#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{

	int aCnt, eCnt, iCnt, oCnt, uCnt, spaceCnt, tabCnt, enterCnt;
	int ffCnt, flCnt, fiCnt;
	
	aCnt = eCnt = iCnt = oCnt = uCnt = spaceCnt = tabCnt = enterCnt = 0;
	ffCnt = flCnt = fiCnt = 0;
	
	char ch, prech = '\0';
    while (cin >> std::noskipws >> ch) {
        switch (ch) {
        case 'a':
        case 'A':
            ++aCnt;
            break;
        case 'e':
        case 'E':
            ++eCnt;
            break;
        case 'i':
            if (prech == 'f') ++fiCnt;
        case 'I':
            ++iCnt;
            break;
        case 'o':
        case 'O':
            ++oCnt;
            break;
        case 'u':
        case 'U':
            ++uCnt;
            break;
        case ' ':
            ++spaceCnt;
            break;
        case '\t':
            ++tabCnt;
            break;
        case '\n':
            ++enterCnt;
            break;
        case 'f':
            if (prech == 'f') ++ffCnt;
            break;
        case 'l':
            if (prech == 'f') ++flCnt;
            break;
        }
        prech = ch;
    }
	

	cout << aCnt << endl;
	cout << eCnt << endl;
	cout << iCnt << endl;
	cout << oCnt << endl;
	cout << uCnt << endl;
	cout << spaceCnt << endl;
	cout << tabCnt << endl;
	cout << enterCnt << endl;
	cout << ffCnt << endl;
	cout << flCnt << endl;
	cout << fiCnt << endl;
	
	return 0;
	

}
