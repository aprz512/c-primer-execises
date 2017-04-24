#include <iostream>

int main () 
{
	int i = 0;
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1, &r1 = v1;
	const int *p2 = &v2, *const p3 = &i, &r2 = v2;
	
	//　这个根本就没有　i 
	
	// v2 是顶层
	// p2 是底层
	//　p3 是顶层 也是底层
	//　r2 是顶层
	
    r1 = v2; //　ok r1 引用的是　v1，v1不是常量，这只是一个赋值操作，没有什么影响
	//p1 = p2; // not ok 
	p2 = p1; //　ok int * 可以转换为　const int *
	//p1 = p3; // not ok
	p2 = p3; // ok 都是底层
	
	std::cout << r1 << "---" << v2 << std::endl;
	
	return 0;
	
}

