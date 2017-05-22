#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ifstream;
using std::istringstream;
using std::ostringstream;

struct Person {
	string name;
	vector<string> phones;
};

bool valid(const string& str)
{
	for (const auto c : str) 
	{
		if (!isdigit(c))
		{
			return false;
		}
	}
    return true;
}

string format(const string& str)
{
    return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main(int argc, char **argv)
{
	vector<Person> pvec;
	
	string line;
	
	ifstream ifs(*(argv + 1));
	
	while (getline(ifs, line))
	{
		Person person;
		string phone;
		
		istringstream iss(line);
		
		iss >> person.name;
		while (iss >> phone)
		{
			person.phones.push_back(phone);
		}
		pvec.push_back(person);
	}
	
	
	string name;
	string phone;
	for (const auto &person : pvec)
	{
		ostringstream oss, badNums;
		for (const auto &phone : person.phones)
		{
			if(!valid(phone))
			{
				badNums << " " << phone;
			} 
			else
			{
				oss << " " << format(phone);	
			}
		}
		if (badNums.str().empty())
		{
			cout << person.name << oss.str() << endl;
		}
		else
		{
			cout << "error in" << person.name << " " << badNums.str() << endl;
		}
		
	}

	return 0;
}
