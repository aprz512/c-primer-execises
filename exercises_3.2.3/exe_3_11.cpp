// 合法

// c 是 const &char
// 

#include <iostream>
#include <string>

using std::string;

int main ()
{

	const string s = "Keep out!";

	for (auto &c : s) 
	{
		c = 'x';
	}

	const int a = 10;
	auto &b = a;
	b = 10;
	

	return 0;
}
