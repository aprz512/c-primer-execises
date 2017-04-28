#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

// 因为懒得一个一个写了，我就用了函数，虽然还没学到，但是我有 c 和 java 基础啊

void print_vector(vector<int> ivec)
{
    cout << "size = " << ivec.size() << endl;
    cout << "每个元素值如下：" << endl;
    cout << "[ ";
    
    for(auto begin = ivec.begin(), end = ivec.end(); begin != end; begin++)
    {
        cout << *begin << " ";
    }
    
    cout << "]" << endl;
    cout << "--------------------------" << endl;
}

void print_vector(vector<string> svec)
{
    cout << "size = " << svec.size() << endl;
    cout << "每个元素值如下：" << endl;
    cout << "[ ";
    
    for(auto begin = svec.begin(), end = svec.end(); begin != end; begin++)
    {
        cout << *begin << " ";
    }
    
    cout << "]" << endl;
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

    print_vector(v1);
    print_vector(v2);
    print_vector(v3);
    print_vector(v4);
    print_vector(v5);
    
    print_vector(v6);
    print_vector(v7);
    
	return 0;
}


