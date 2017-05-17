#include <iostream>
#include "exe_7_15.h"

using std::cout;
using std::endl;

int main()
{
	Person person("hhh", "xxx");
	
	cout << person.getName() << "----" << person.getAddress() << endl;

	return 0;
}
