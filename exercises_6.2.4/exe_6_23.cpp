#include <iostream>

using std::cout;
using std::endl;
using std::end;
using std::begin;

void print (const int *pa)
{
	if (pa)
	{
		cout << *pa << endl;
	}
}

void print (const int (&arr)[2])
{

	for (int i : arr)
	{
		cout << i << endl;
	}
	
}

void print(const int arr[], const size_t size)
{
	for (size_t i = 0; i != size; ++i)
	{
		cout << arr[i] << endl;
	}
}

void print(const int* beg, const int* end)
{
    while (beg != end) 
    {
    	cout << *beg++ << endl;
    }
}

int main()
{

	int i = 0;
	int j[2] = {0, 1};
	
	print(&i);
	print(j);
	print(j, end(j) - begin(j));
	print(begin(j), end(j));

	return 0;
}


