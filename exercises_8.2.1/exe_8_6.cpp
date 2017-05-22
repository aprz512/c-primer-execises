#include <iostream>
#include "exe_8_6.h"
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;

int main(int argc, char** argv)
{

	Sales_data total, temp;
	
	ifstream fis(*(argv+1));
	if (read(fis, total))
	{
		while(read(fis, temp))
		{
			if (total.getBookNo() == temp.getBookNo())
			{
				total.combine(temp);
			}
			else
			{
				print(cout, total) << endl;
				total = temp;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cout << "no data!!!" << endl;
	}
	
}
