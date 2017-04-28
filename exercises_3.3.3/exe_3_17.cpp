#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    vector<string> words;
    string word;
    
    while(cin >> word)
    {
        words.push_back(word);
    }
    
    for (auto &s : words)
    {
        for (auto &c : s)
        {
            c = toupper(c);
        }
    }
    
    for (auto &s : words)
    {
        cout << s << endl;
    }

    return 0;
}
