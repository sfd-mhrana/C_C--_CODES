#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> countFrequency(const string &s)
{
    vector<int> fArray(26, 0);

    for (char c : s)
    {
        int index = tolower(c) - 'a';
        fArray[index]++;
    }

    return fArray;
}

int main()
{
    string s;
    getline(cin, s);
    vector<int> value = countFrequency(s);

    for (int i = 0; i < 26; ++i)
    {
        if (value[i] > 0)
        {
            char letter = 'a' + i;
            cout << letter << " : " << value[i] << endl;
        }
    }

    return 0;
}