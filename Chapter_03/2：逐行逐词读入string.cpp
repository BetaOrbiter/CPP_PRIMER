#include <iostream>
#include <string>
#include <Windows.h>

using std::cin;
using std::cout;
using std::string;

int main(void)
{
	
	string s;
	while (cin >> s)
		cout << s << std::endl;
	system("Pause");
	return 0;
}