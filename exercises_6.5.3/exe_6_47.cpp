#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cout;
using std::endl;

//#define NDEBUG

void print(vector<int> ivec) 
{

#ifndef NDEBUG
	cout << "size = " << ivec.size() << endl;
	// 当我使用 "size = " + ivec.size() 的时候，出现了很奇怪的现象
#endif

	if (ivec.empty())
		return;
	
	auto last = ivec.back();
	ivec.pop_back();
	print(ivec);
	cout << last << endl;
	


}

int main()
{
	vector<int> ivec = {2, 4, 5, 7, 9, 12, 23};
	print(ivec);
	return 0;
}
