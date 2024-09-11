#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<char, int> symbolValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
};

int romanToInt(string s)
{
    int result = 0;
    int size = s.size();
    for (size_t i = 0; i < size; i++)
    {
        int value = symbolValues[s[i]];

        if (i < size - 1 && value < symbolValues[s[i + 1]])
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