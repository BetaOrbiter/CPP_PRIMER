#include <iostream>
#include <Windows.h>

int main(void)
{
	int  smallest, largest;
	std::cin >> smallest >> largest;
	std::cout << "***************";
	for (int i = smallest; i <= largest; i++)
		std::cout << i << std::endl;
	system("pause");
	return 0;
}