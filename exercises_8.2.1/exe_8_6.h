#ifndef exe_8_6.H
#define exe_8_6.H

#include <iostream>

class Sales_data{

	// 遇到了问题，一个是忘记声明成友元函数，刚开始值声明了一个，还查了半天，太傻逼了
	// 第二个是返回流时，忘记使用引用了。
	friend std::istream &read(std::istream &is, Sales_data &item);
	friend std::ostream &print(std::ostream &os, const Sales_data &item);

public:

	Sales_data &combine(const Sales_data &item)
	{
		if (item.bookNo != bookNo)
		{
			return *this;
		}
		
		soldCount += item.soldCount;
		revenue = soldCount * price;
		
		return *this;
	}
	
	const std::string &getBookNo()
	{
		return bookNo;
	}
	

private:

	std::string bookNo;
	unsigned soldCount;
	double revenue;
	double price;
	
};


std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.bookNo << " - " << item.soldCount << " - " << item.price << " - " << item.revenue;
	return os;
}

std::istream &read(std::istream &is, Sales_data &item)
{
	is >> item.bookNo >> item.soldCount >> item.price;
	item.revenue = item.price * item.soldCount;
	return is;
}

#endif

