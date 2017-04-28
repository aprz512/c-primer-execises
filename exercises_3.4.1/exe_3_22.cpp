#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
	vector<string> text = {
		"To find out more about refining searches and using ...",
		"    ",
		"more to follow me !!!",
		"",
		"Htoejfoasjfjsf "
	};
	
	for(auto begin = text.begin(), end = text.end(); begin != end; ++begin)
	{
		auto temp =  *begin;
		if (!temp.empty())
		{
			for (char &c : temp) 
			{
				c = toupper(c);
			}
		} 
		else
		{
			break;
		}
		
		cout << temp << endl;
	}

	return 0;
}
