#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
	Sales_data total;
	
	if (cin >> total.bookNo >> total.units_sold >> toal.revenue)
	{
		Sales_data next;
		while (cin >> next.bookNo >> next.units_sold >> next.revenue)
		{
			if (total.bookNo == next.bookNo)
			{
				total.units_sold += next.units_sold;
				total.revenue += next.revenue;
			}
			else
			{
				cout << total.bookNo << " " << total.units_sold << " "
                     << total.revenue << endl;
				total = next;
			}
		}
	}
	else 
	{
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
	
	return 0;
}
