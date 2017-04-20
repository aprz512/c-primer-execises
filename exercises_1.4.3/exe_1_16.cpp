#include <iostream>

int main() {
	
	int sum =0, val = 0;
	
	// 注意这里测试的 std::cin 流的状态
	// 如果流未遇到错误或者文件结尾，则条件通过
	while (std::cin >> val) {
		sum += val;
	}
	
	std::cout << sum << std::endl;

}
