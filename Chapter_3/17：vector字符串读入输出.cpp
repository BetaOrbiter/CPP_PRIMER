#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>

using namespace std;

int main(void)
{
	string temp;
	vector <string> str;
	while (cin >> temp)
		str.push_back(temp);
	for (auto i : str)
	{
		for (auto j : i)
			j = toupper(j);
		cout << i << endl;
	}
	system("pause");
	return 0;
}