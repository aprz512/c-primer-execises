#include <iostream>

int main ()
{
	int *p = 0;
	
	int i = 10;
	
	std::cout << p << "---" << 0 << "---" << i << std::endl;
	
	p = &i;
	
	std::cout << p << "---" << *p << "---" << i << std::endl;
	
	*p = 100;
	
	std::cout << p << "---" << *p << "---" << i << std::endl;
	
	
	return 0;
}
