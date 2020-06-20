#include "../data/Sales_item.h"
#include <iostream>
int main(void)
{
	Sales_item book;
	if (std::cin >> book)
	{
		Sales_item trans;
		while (std::cin >> trans)
		{
			if (book.isbn() == trans.isbn())
				book+=trans;
			else
			{
				std::cout << book << std::endl;
				book = trans;
			}
		}
		std::cout << book << std::endl;
	}
	else
	{
		std::cout << "No input!" << std::endl;
		return -1;
	}
	return 0;
}