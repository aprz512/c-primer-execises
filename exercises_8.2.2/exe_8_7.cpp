#include <iostream>
#include "../exercises_8.2.1/exe_8_6.h"
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main(int argc, char** argv)
{

	Sales_data total, temp;
	
	ifstream fis(*(argv + 1));
	ofstream ofs(*(argv + 2));
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
				print(ofs, total) << endl;
				total = temp;
			}
		}
		print(ofs, total) << endl;
	}
	else
	{
		cout << "no data!!!" << endl;
	}
	
	return 0;
	
}
