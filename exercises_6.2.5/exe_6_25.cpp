#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	string args;
	
	for (int i = 1; i != argc; i++)
	{
		args += argv[i];
	}
	
	cout << args << endl;
	
	return 0;
}
