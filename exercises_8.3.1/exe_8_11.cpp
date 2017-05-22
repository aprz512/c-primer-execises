#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::vector;
using std::string;

int main(int argc, char **argv)
{
	vector<string> svec;
	
	string line, word;
	ifstream ifs(*(argv + 1));
	while (getline(ifs, line))
	{
		svec.push_back(line);
	}
	
	istringstream iss;
	
	for (auto s : svec) {
		iss.clear();
		iss.str(s);
		while (iss >> word) 
		{
			cout << word << endl;
		}
		cout << "----------" << endl;
	}

	return 0;
}
