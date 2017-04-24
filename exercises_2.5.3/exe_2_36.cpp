#include <iostream>

int main () 
{
	int a = 3, b = 4;
	decltype(a) c = a;	// c 是 int
	
	decltype((b)) d = a;// d 是 int &
	
	std::cout << a << std::endl; // 3
	
	++c;
	++d;
	
	std::cout << a << std::endl; // 4

	std::cout << c << std::endl; // 4

	std::cout << d << std::endl; // 4

	return 0;
}
