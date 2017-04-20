#include <iostream>
#include "Sales_item.h"

int main () {
	
	Sales_item book1, book2;
	
	std::cout << "please input two books : " << std::endl;
	std::cin >> book1 >> book2;
	
	if (book1.isbn() == book2.isbn()) {
		std::cout << book1 + book2 << std::endl;
	} else {
		std::cout << "isbn not the same!!!" << std::endl;
		return -1;
	}

	return 0;
}
