

// 真正编写代码的时候，注意使用 std
struct Sales_data {

	string isbn;
	unsigned units_sold;
	double revenue;
	
	// C++11 默认构造函数
	Sales_data() = default
	
	Sales_data(istream &is);
	
	Sales_data(const string bookNo, unsigned sold, double price)
				: isbn(bookNo), units_sold(sold), revenue(price * sold)
	{
		
	}

};

Sales_data::Sales_data(istream &is)
{
	read(is, *this);
}
