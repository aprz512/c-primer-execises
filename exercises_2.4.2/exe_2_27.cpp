/*
（ａ）　必须要是　const 引用才能用表达式初始化

（ｂ）若　i2 是　int，则　ok

(c) ok

(d) i2 要是 int 

（ｅ）同上

(f) 未赋值　

(g) ok
*/

#include <iostream>

int main() 
{
	int i2 = 9;

	//int i = -1, &r = 0;
	int *const p2 = &i2;
	const int i = -1, &r = 0;
	const int *const p3 = &i2;
	const int *p1 = &i2;
	//const int &const r2;
	const int i3 = i, &r2 = i;
	
	double d = 9.8;
	const int &dr = d;
	
	return 0;
}
