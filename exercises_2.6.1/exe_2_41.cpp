#include <iostream>

struct Sales_data {

	std::string isbn;
	double price{0.0};
	int count{0};
	double total_price{0.0};

};

int main ()
{
	Sales_data sd, temp;
	int total_count = 0;
	double total_price = 0;
	
	if (std::cin >> sd.isbn >> sd.price >> sd.count) 
	{
		sd.total_price = sd.price * sd.count;
		while (std::cin >> temp.isbn >> temp.price >> temp.count) 
		{
			temp.total_price = temp.price * temp.count;
			if (sd.isbn == temp.isbn)
			{
				sd.count += temp.count;
				sd.total_price += temp.total_price;
			}
			else 
			{
				std::cout << "ISBN error!!" << std::endl;
				break;
			}
		}
		
		std::cout << "isbn = " << sd.isbn << std::endl;
		std::cout << "price = " << sd.price << std::endl;
		std::cout << "count = " << sd.count << std::endl;
		std::cout << "total_price = " << sd.total_price << std::endl;
	}

	return 0;
}
