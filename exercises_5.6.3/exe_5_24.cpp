#include <iostream>
#include <stdexcept>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;

int main()
{
	int x, y;
	string input;

	
	do {
		cin >> x >> y;
		try {
			if (y == 0)
			{
				throw runtime_error("除数不能为0.");
			}
			cout << x / y << endl;
			return 0;
		} catch (runtime_error e) {
			cout << e.what() << "try again??? n to quit" << endl;
			cin >> input;
			if (input == "n")
			{
				return 0;
			}
		} 
	} while (cin);

	
	return 0;
}
