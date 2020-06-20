#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

int main(void)
{
	int temp;
	vector <int> nums;
	while (cin >> temp)
	{
		nums.push_back(temp);
		cin.clear();   //清除错误状态 
		cin.ignore();//跳过无效数据
	}
	for (int i = 0; i < nums.size() - 1; i++)
		cout << nums[i] + nums[i + 1];
	int j = 0;
	int k = nums.size() - 1;
	while (j < k)
	{
		cout << nums[j] + nums[k];
		++j;
		--k;
	}
	system("pause");
	return 0;
}