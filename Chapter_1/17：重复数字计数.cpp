#include <iostream>
#include <Windows.h>

int main(void)
{
	int currval, val;//��ǰֵ����ֵ
	if (std::cin >> currval)
	{
		int count = 1;//��ǰͳ�����ĸ���
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