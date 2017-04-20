#include <iostream>
#include "Sales_item.h"

int main() {
	
	Sales_item curBook, book;
	
	std::cin >> book;
	
	while (std::cin >> curBook) {
		if (curBook.isbn() == book.isbn()) {
			book += curBook;
		} else {
			std::cout << "isbn not the same, ingore this!!!" << std::endl;
		}
	}
	
	std::cout << book << std::endl;
	
	return 0;
}
