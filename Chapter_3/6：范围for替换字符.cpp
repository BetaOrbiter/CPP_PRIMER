#include <iostream>
#include <string>
#include <Windows.h>
using std::string;
int main (void)
{
	string s1(5,'c');
	std::cout<<s1<<std::endl;
	for(auto &temp:s1)
		temp = 'X';
	std::cout<<s1<<std::endl;
	system("Pause");
	return 0;
}