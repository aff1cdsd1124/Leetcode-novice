#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int x)
{
	if (x < 0) { return false; }
	string num = to_string(x);
	int size = num.size();
	if (size % 2 == 0)
	{
		for (int i = 0; i < size / 2; i++)
		{
			if (num[i] != num[size - 1 - i])
				return false;
		}
	}
	else
	{
		for (int i = 0; i < size / 2 + 1; i++)
		{
			if (num[i] != num[size - 1 - i])
				return false;
		}
	}
	return true;
}

int main()
{
	int a;
	cin >> a;
	cout<<	isPalindrome(a);
	return 0;
}