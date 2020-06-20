#include "Sales_item.h"
#include <iostream>
#include <Windows.h>
int main(void)
{
	Sales_item book;
	if (std::cin >> book)
	{
		Sales_item trans;
		while (std::cin >> trans)
		{
			if (book.isbn() == trans.isbn())
				++trans;
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
		system("Pause");
		return -1;
	}
	system("Pause");
	return 0;
}