#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	double price = 0;
	
	Sales_data data1, data2;

	// read into data1 and data2
	std::cin >> data1.bookNo >> data1.units_sold >> price;
  	data1.revenue = data1.units_sold * price;

	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	// check if data1 and data2 have the same isbn
	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		//   if so, prints the of data1 and data2
		std::cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalRevenue != 0) {
			std::cout << totalRevenue / totalCnt << std::endl;
		}
		else { // no sales were inserted.
			std::cout << "(no sales)" << std::endl;
		}
		return 0;
	}
	else { // transactions were not for the same ISBN
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		std::cin.get();
		return -1; // indicate failure.
	} 
	
	std::cin.get();
}