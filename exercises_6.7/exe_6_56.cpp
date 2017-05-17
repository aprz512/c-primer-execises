#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b != 0 ? a / b : 0; }

int main()
{
	using PARITH = int(*)(int, int);

	vector<PARITH> pvec;

	pvec.push_back(add);
	pvec.push_back(subtract);
	pvec.push_back(multiply);
	pvec.push_back(divide);
	
	
	for (auto pf : pvec)
	{
		cout << pf(4, 2) << endl;
	}

	return 0;
}



