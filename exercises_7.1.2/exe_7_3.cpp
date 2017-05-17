#include <iostream>
#include "exe_7_2.h"

int main()
{
	Sales_data total;
	
	if (cin >> total.isdn() >> total.units_sold >> toal.revenue)
	{
		Sales_data next;
		while (cin >> next.isdn() >> next.units_sold >> next.revenue)
		{
			if (total.isdn() == next.isdn())
			{
				total.combine(next);
			}
			else
			{
				cout << total.isbn() << " " << total.units_sold << " "
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
