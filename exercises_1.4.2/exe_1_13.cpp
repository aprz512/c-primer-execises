#include <iostream>
int main () {

	// --------------------------------------------------------------------------------------
	
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
	
	for (int i = start + 1; i < end; i++) {
		std::cout << start << std::endl;
	}

	
	// --------------------------------------------------------------------------------------
	

	for (int val = 10; val > 0 ; val--) {
		std::cout << val << std::endl;
	}
		
	
	// --------------------------------------------------------------------------------------
	
	
	int sum = 0, val2 = 50;
	
	for (int val2 = 50; val2 <= 100 ; val2 ++) {
		sum += val2;
	}
	
	std::cout << "the sum is " << sum << std::endl;
	
	
	// --------------------------------------------------------------------------------------
	
	return 0;
	
}
