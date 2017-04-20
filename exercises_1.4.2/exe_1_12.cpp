#include <iostream>
int main() {

	// 这段代码 就是求 -100 到 100 的和，最后的结果显然是 0.
	int sum = 0;
	for (int i = -100; i < 100; ++i) {
		sum += i;
	}
}
