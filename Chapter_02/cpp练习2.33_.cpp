// C++_prime ��ϰ2.33.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <iostream>
#include <Windows.h>

int main()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;
	const auto &j = 42;
	a = 42;
	b = 42;
	c = 42;
	d = 42;
	e = 42;
	g = 42;
    return 0;
}

