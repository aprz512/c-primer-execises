#include <iostream>
int main() {
	// 1.17  当输入的数 全部相等的时候，第2个if就一直执行 true 的流程
	// 当输入的数 都不相等的时候，第 2 个 if 就一直执行 false 的流程
	// 打印的结果可以想象
	
	//----------------------------------------------------------------
	
	// 1.18
	
	int curVal;
	
	if (std::cin >> curVal) {
	
		int val;
		int count = 1;
		
		while (std::cin >> val) {
			
			if (val == curVal) {
				count++;
			} else {
				std::cout << curVal << " appear " << count << " times !" << std::endl;
				count = 1;
				curVal = val;
			}
			
		}	
		
		std::cout << curVal << " appear " << count << " times !" << std::endl;
		return 0;
		
		//----------------------------------------------------------------
	
		// 1.19
		// 在之前的程序中，已经用到 if 了，所以就跳过了。
		
	}
}
