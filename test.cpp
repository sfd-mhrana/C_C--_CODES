#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str);

    string word;
    int count = 0;

    while (ss >> word)
    {
        for (char ch : word)
        {
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            {
                count++;
                break;
            }
        }
    }

    cout << count;
    return 0;
}