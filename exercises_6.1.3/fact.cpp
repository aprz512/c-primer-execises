#include <iostream>
#include "Chapter6.h"

int fun() 
{
	static int count = 0;
	return count++;
}

int abs(int ival)
{
	if (ival < 0)
	{
		return -ival;
	}
	
	return ival;
}
