#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int score;
	
	cin >> score;
	
	string result = score > 90 ? "high pass" 
				: ((score < 60) ? "fail" 
				: (score > 60 && score < 75 ? "low pass" : "pass"));
				
	cout << result << endl;
	
	if (score > 90) 
	{
		cout  << "high pass" << endl;
	}
	else if (score > 75) 
	{
		cout  << "pass" << endl;
	} 
	else if (score > 60)
	{
		cout  << "low pass" << endl;
	}
	else
	{
		cout  << "fail" << endl;
	}
	
	// 肯定是if else 更好，结构清晰


	return 0;
}
