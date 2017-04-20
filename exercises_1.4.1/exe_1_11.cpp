#include <iostream>
int main () {
	
	int start, end;
	
	std::cout << "input two integers, i will print each number in the range !!!" << std::endl;
	
	std::cout << "input the first number : " << std::endl;
	std::cin >> start;
	
	std::cout << "input the second number : " << std::endl;
	std::cin >> end;
	
	if (start > end) {
		std::cout << "please input the min number first !!!" << std::endl;
		return -1;
	}
	
	start++;
	while (start < end) {
		std::cout << start << std::endl;
		start++;
	}
	
	return 0;
	
}
