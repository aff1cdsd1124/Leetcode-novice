#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
	for (auto a : strs)
	{
		if (a.size() == 0)        //长度为零必无公共前缀
			return "";
	}

	int minsize = strs[0].size();
	for (auto b : strs)
	{
		if (b.size() < minsize)         //找出最短的成员，只需判断完这个长度就行
			minsize = b.size();
	}

	int size = strs.size();
	string a = {};

	for (int i = 0; i < minsize; i++)    
	{
		
		for (int j = 0; j < size - 1; j++)
		{
			if (strs[j][i] != strs[j + 1][i])
				return a;
		}
		a.push_back(strs[0][i]);

	}

	return a;
}


int main()
{
	vector<string> a = { "flower","flow","flight" };
	cout << longestCommonPrefix(a) << endl;

	return 0;
}