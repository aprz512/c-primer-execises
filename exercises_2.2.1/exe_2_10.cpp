#include <iostream>

std::string global_str;	// class　type　有自己的默认初始化，空串
int global_int;			// 0

int main()
{
	int local_int;		// undefined
	
	std::string local_str;	// 空串
}
