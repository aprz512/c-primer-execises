#include <iostream>
#include "Sales_item.h"

int main() {
	
	int count = 1;
	Sales_item book, book2;
	
	if (std::cin >> book) {
		
		while (std::cin >> book2) {
		
			if (book2.isbn() == book.isbn()) {
				count++;
			} else {
				std::cout << book << " occurs " << count << " times !!!" << std::endl;
				count = 1;
				book = book2;
			}
			
		}
		
		std::cout << book << " occurs " << count << " times !!!" << std::endl;
		
	}
	
	return 0;
}
