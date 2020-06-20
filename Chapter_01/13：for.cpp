#include <iostream>

int main(void)
{
	//练习9
	int result=0;
	for(int i=50;i<=100;i++)
		result+=i;
	//练习10
	for(int i=10;i>=0;i--)
		std::cout<<i<<std::endl;
	//练习11
	int  smallest, largest;
	std::cin >> smallest >> largest;
	std::cout << "***************";
	for (int i = smallest; i <= largest; i++)
		std::cout << i << std::endl;
	return 0;
}