#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item book;
	
	// 该程序编译的时候 记得在编译命令上使用 -std=c++11
	// 因为我下载的 code 是 c++ 11 的
	// 其实应该下载  c++ 11 之前的 source code
	// 如果不带该命令也能编译过，说明我已经替换了 source code
	while (std::cin >> book) {
		std::cout << book << std::endl;
	}
	
	return 0;
}
