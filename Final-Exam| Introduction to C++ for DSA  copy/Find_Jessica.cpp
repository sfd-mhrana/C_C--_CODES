#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    string word;
    bool find = false;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            find = true;
            break;
        }
    }

    if (find)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
};