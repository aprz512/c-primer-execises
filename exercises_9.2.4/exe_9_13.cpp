#include <iostream>
#include <vector>
#include <list>

using std::list;
using std::vector;

//这题的翻译真是垃圾......

int main()

{
	list<int> il(10, 9);
	
	list<int>::iterator b = il.begin();
	list<int>::iterator e = il.end();
	
	vector<int> iv(10, 9);
	
	vector<int>::iterator b2 = iv.begin();
	vector<int>::iterator e2 = iv.end();
	
	
	vector<double> dv(b, e);
	vector<double> dv2(b2, e2);


	return 0;
}

