
#include <iostream>
#include <windows.h>
#include <initializer_list>
//初始化列表类似容器，参数实为元素
int add(std::initializer_list<int> i1);

int main(void)
{
	auto L = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::cout << add(L) << std::endl;
	system("pause");
	return 0;
}

int add(std::initializer_list<int> i1)
{
	int sum = 0;
	for (auto i = i1.begin(); i != i1.end(); i++)
		sum += (*i);
	return sum;
}
