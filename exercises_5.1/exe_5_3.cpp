#include <iostream>
int main()
{
    int sum = 0, val = 1;
    while (val <= 10)
        sum += val, ++val;
        
    // 这个可读性，显然降低了，并且让人感觉奇怪，虽然可以正确执行
        
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;

    return 0;
}


