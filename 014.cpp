#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
	for (auto a : strs)
	{
		if (a.size() == 0)        //����Ϊ����޹���ǰ׺
			return "";
	}

	int minsize = strs[0].size();
	for (auto b : strs)
	{
		if (b.size() < minsize)         //�ҳ���̵ĳ�Ա��ֻ���ж���������Ⱦ���
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