#include <iostream>
#include <string>

using namespace std;

int getValue(char ch)
{
    switch (ch)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
    }
}

int romanToInt(string s)
{
    int result = 0;
    int size = s.size();
    for (size_t i = 0; i < size; i++)
    {
        int value = getValue(s[i]);

        if (i < size - 1 && value < getValue(s[i + 1]))
        {
            result -= value;
        }
        else
        {
            result += value;
        }

    }
    return result;
}

int main()
{
    string a;
    char c;
    while (cin.get() != '\n')
    {
        cin.unget();
        cin >> c;
        a.push_back(c);
    }
    cout << romanToInt(a) << endl;

    return 0;
}