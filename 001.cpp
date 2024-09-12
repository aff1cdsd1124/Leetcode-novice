#include <iostream>
#include <vector>

using namespace std;

vector<int> twosum(vector<int>& nums, int target)
{
	int size = nums.size();
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				return { i,j };//不用提前定大小，直接返回即可
			}
		}
	}
	return {};//可返回一个空vector
}

int main()
{
	vector<int> nums = { 1,2,3,4,5 };
	vector<int> a = twosum(nums, 7);;
	cout << a[0] << ' ' << a[1] << endl;
	return 0;
}
