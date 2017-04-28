#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

// 因为懒得一个一个写了，我就用了函数，虽然还没学到，但是我有 c 和 java 基础啊

void print_vector(vector<int> ivec)
{
    cout << ivec.size() << endl;
    
    for(auto i : ivec)
    {
        cout << i << endl;
    }
    
    cout << "--------------------------" << endl;
}

void print_vector(vector<string> svec)
{
    cout << svec.size() << endl;
    
    for(auto s : svec)
    {
        cout << s << endl;
    }
    
    cout << "--------------------------" << endl;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    
    cout << "vector size:" << endl;
    
    cout << v1.size() << endl;    
    cout << v2.size() << endl;  
    cout << v3.size() << endl;  
    cout << v4.size() << endl;  
    cout << v5.size() << endl;  
    cout << v6.size() << endl;  
    cout << v7.size() << endl;  
    
    cout << "vector status:" << endl;
    print_vector(v1);
    print_vector(v2);
    print_vector(v3);
    print_vector(v4);
    print_vector(v5);
    
    print_vector(v6);
    print_vector(v7);
    
	return 0;
}


