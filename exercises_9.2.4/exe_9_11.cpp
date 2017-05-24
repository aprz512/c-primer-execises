6 种创建和初始化vector对象的方法：

1. vector<int> ivec1(10);		// 10个元素，每个都是0
2. vector<int> ivec2(10， 1);	// 10个元素，每个都是1
3. vector<int> ivec3{2};		// 1个元素，每个都是2
4. vector<int> ivec4;			// 0个元素
5. vector<int> ivec5(ivec1.begin(), ivec1.end());		// 10个元素，第一个是3，其余是0
5. vector<int> ivec6(ivec1);	// 同ivec1
