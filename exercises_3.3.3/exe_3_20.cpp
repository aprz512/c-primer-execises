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
    
    decltype(ivec.size()) size = ivec.size(), i = 0;
    for (i = 0; i<size; i += 2)
    {
        if (i+1 < size) {
            cout << ivec[i] << " + " << ivec[i+1] << " = " << ivec[i] + ivec[i+1] << endl;
        }
    }
    
    cout << "-----------------
    ---------" << endl;
    
    decltype(ivec.size()) s, e;
    for (s = 0, e = ivec.size() - 1; s < e; s++, e--)
    {
        cout << ivec[s] << " + " << ivec[e] << " = " << ivec[s] + ivec[e] << endl;
    }
    
    return 0;
}
