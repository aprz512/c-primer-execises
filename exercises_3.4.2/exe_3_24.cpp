#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    vector<int> ivec;
    int temp;
    
    while(cin >> temp)
    {
        ivec.push_back(temp);
    }
    
    // 不处理单独的一个
    //

    for (auto begin = ivec.begin(), end = ivec.end(); begin < end; ++begin)
    {
    	auto first = *begin;
    	begin++;
    	if (begin != end) 
    	{
    		auto second = *begin;
    		cout << first << " + " << second << " = " << first + second << endl;
    	}
    }
    
    cout << "--------------------------" << endl;
    
    for (auto begin = ivec.begin(), end = ivec.end() - 1; begin < end; ++begin, --end)
    {
        cout << *begin << " + " << *end << " = " << *begin + *end << endl;
    }
    
    return 0;
}
