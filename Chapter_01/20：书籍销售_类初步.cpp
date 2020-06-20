#include <iostream>
#include "../data/Sales_item.h"

int main(void)
{
	Sales_item book;
	while (std::cin >> book)
		std::cout << book << std::endl;
	return 0;
}