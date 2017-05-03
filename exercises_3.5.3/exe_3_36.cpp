#include <iostream>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::endl;


int main()
{
	int ia1[] = {0, 1, 2, 3, 4, 5};
	int ia2[] = {0, 1, 2, 3, 4, 5};
	
	int *iasp1 = begin(ia1);
	int *iaep1 = end(ia1);
	int *iasp2 = begin(ia2);
	int *iaep2 = end(ia2);
	
	if (iaep1 - iasp1 != iaep2 - iasp2)
	{
		cout << "不相等!" << endl;
		return 0;
	}
	
	bool equal = true;
	for (; iasp1 != iaep1 && iasp2 != iaep2; iasp1++, iasp2++)
	{
		if (*iasp1 != *iasp2) 
		{
			equal = false;
		}
	}
	
	if (!equal) 
	{
		cout << "不相等!" << endl;
		return 0;
	}
	
	cout << "相等!" << endl;
		
	return 0;
}
