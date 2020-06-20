#include<iostream>
#include <windows.h>

using namespace std;

int main(void)
{
	double i;
	double *j = &i;
	cout << sizeof(int) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;
	cout << sizeof(j) << endl;
	system("pause");
	return 0;
}