#include <iostream>
#include <vector>
#include <Windows.h>
#include <string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
int main(void)
{
	vector <int> n(10,20);
	int temp;
	unsigned count = 10;
	//while (cin >> temp)
	//{
	//	n.push_back(temp);
	//	count++;
	//}
	for (unsigned i = 0; i < count; i++)
		cout << n[i] << std::endl;
	system("pause");
	return 0;
}