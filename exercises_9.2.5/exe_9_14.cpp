#include <iostream>
#include <list>
#include <vector>
#include <string>

using std::list;
using std::vector;
using std::string;
using std::endl;
using std::cout;

int main()
{
	list<const char *> pcl = {"hello", " world", " !!!"};
	vector<string> svec;
	svec.assign(pcl.cbegin(), pcl.cend());
	
	string s = "hhhh";
	for (auto &c : s)
	{
		c = toupper(c);
	}
	cout << s << endl;
 
	return 0;
}



