#ifndef exe_7_4.H
#define exe_7_4.H

#include <string>

struct {
	
	string name;
	string address;
	
	
	// 前面的const表示该函数返回的string是只读的
	// 后面的const表示this是常量指针
	const string& getName() const
	{
		return name; 
	}
	
	const string& getAddress() const
	{
		return address; 
	}
	
};

#endif
