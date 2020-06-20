#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
int main(void)
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1.size() > s2.size())
		cout << s1;
	else
		cout << s2;
	cout << endl;
	system("pause");
	return 0;
}