#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int main()
{
	const char ca[] = "Hello";
	const char ca2[] = " world!!!";
	
	constexpr size_t size = 5 + 9 + 1;
	
	char ca3[size];
	
	strcpy(ca3, ca);
	strcat(ca3, ca2);	
 
 	cout << ca3 << endl;
	
	return 0;
}
