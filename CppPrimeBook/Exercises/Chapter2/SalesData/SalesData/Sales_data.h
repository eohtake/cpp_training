#ifndef SALES_DATA_H // Evita definicao duplicada de headers.
#define SALES_DATA_H

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

#endif
