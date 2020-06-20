#include <iostream>
#include <Windows.h>
#include "Sales_item.h"

int main(void)
{
	Sales_item book;
	while (std::cin >> book)
		std::cout << book << std::endl;
	system("pause");
	return 0;
}