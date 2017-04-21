#include <iostream>

int main ()
{
	// error >> 右边需要一个变量。
	// 但是定义语句没有返回值
	// std::cin >> int input_value;
	
	// 列表初始化 会出现精度丢失问题，所以编译器会报错
	// int i = {3.14};
	
	// error wage 没有定义
	// double salary = wage = 99999.99;
	
	
	// 没有错误吧，只是会丢失精度
	int i2 = 3.14;
	
	int _ = 3;
	
	double Double = 3.14;
	
	int i, &r1 = i;
	i = 5;
	r1 = 10;
	
	
	std::cout << i << "----" << r1 << std::endl;
	
	return 0;
}
