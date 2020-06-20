#include <iostream>
#include <Windows.h>

int main(void)
{
	int currval, val;//当前值，新值
	if (std::cin >> currval)
	{
		int count = 1;//当前统计数的个数
		while (std::cin >> val)
		{
			if (val == currval)
				++count;
			else
			{
				std::cout << currval << " occurs "
					<< count << " times" << std::endl;
				currval = val;
				count = 1;
			}
		}
		std::cout << currval << " occurs "
			<< count << " times " << std::endl;
	}
	system("pause");
	return 0;
}