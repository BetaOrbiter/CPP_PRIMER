#include <iostream>
#include <Windows.h>

using namespace std;

int main(void)
{
	int divisor,devide;
part1:
	try
	{
	cin >> devide >> divisor;
		if (0 == divisor)
			throw runtime_error("Devide can't be 0!");
		cout << devide / divisor << endl;
	}
	catch (const std::runtime_error)
	{
		cout << "Try again?" << endl;
		goto part1;
	}
	system("pause");
	return 0;
}