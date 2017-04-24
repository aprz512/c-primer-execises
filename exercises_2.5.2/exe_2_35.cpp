#include <iostream>

int main ()
{
	const int i = 42;
	auto j = i;					// int
	const auto &k = i;			// const int &
	auto *p = &i;				// const int *
	const auto j2 = i, &k2 = i;	// j2 const int, k2 const int & 
	
	j = 10;
	//k = 10;
	//*p = 10;
	//j2 = 10;
	//k2 = 10;
	
	// error *p k j2 k2 都是只读

	return 0;
}
