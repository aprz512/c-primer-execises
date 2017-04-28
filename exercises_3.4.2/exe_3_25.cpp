#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{

	vector<int> scores(11);
	int score;
	
	while(cin >> score)
	{
		int index = score / 10;
		auto begin = scores.begin();
		*(begin + index) += 1;
	}
	
	for (int i : scores)
	{
		cout << i << endl;
	}
	
	return 0;
}
