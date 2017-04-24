#include <iostream>

int main() 
{

	int i= 0, &r = i;
	auto a= r;
	const int ci = i, &cr = ci;
	
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	
	const auto f = ci;
	
	auto &g = ci;
	// error 只能推断出 int 不能推断出 const int 但是非const引用禁止使用常量赋值	
	// auto &h = 42;		
	const auto &j = 42;
	
	auto k = ci, &l = i;
	auto &m = ci, *p = &ci;
	
	// error 初始值要是同一种类型
	// auto &n = i, *p2 = &ci;
	
	a = 42;
	b = 42;
	c = 42;
	// d = 42; d 是 int *
	// e = 42; e 是 const int *
	// g = 42; g 是 const & 

	return 0;
	
}
