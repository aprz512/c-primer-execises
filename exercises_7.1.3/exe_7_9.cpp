#ifndef exe_7_4.H
#define exe_7_4.H

#include <string>
#include <iostream>

struct Person {
	
	std::string name;
	std::string address;
	
	
	// 前面的const表示该函数返回的string是只读的
	// 后面的const表示this是常量指针
	const std::string& getName() const
	{
		return name; 
	}
	
	const std::string& getAddress() const
	{
		return address; 
	}
	

	
};

std::ostream &print(std::ostream &os, const Person &person)
{
	os << person.getName() << "///" << person.getAddress();
	
	return os;
}

std::istream &read(std::istream &is, Person &person)
{
	is >> person.name >> person.address;
	
	return is;
}

#endif
