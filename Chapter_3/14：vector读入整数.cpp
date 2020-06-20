#include <iostream>
#include <vector>
#include <Windows.h>
#include <string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
int main (void)
{
	vector <string> n;
	string temp;
	unsigned count = 0;
	while (cin >> temp)
	{
		n.push_back(temp);
		count++;
	}
	for (unsigned i = 0; i < count; i++)
		cout << n[count] << std::endl;
	system("pause");
	return 0;
}