#include <iostream>
#include <Windows.h>

int main(void)
{
	int smallest, largest;
	std::cin >> smallest >> largest;
	while (largest<smallest)
	{
		std::cout << "error:former should be smaller.\n"
			<< "intput again.\n";
		std::cin >> smallest >> largest;
	}
	for (int i = smallest; i <= largest; i++)
		std::cout << i << std::endl;
	system("pause");
	return 0;
}