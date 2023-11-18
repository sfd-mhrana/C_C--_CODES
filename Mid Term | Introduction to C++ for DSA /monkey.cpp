#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string c;
    while (getline(cin, c))
    {
        c.erase(remove(c.begin(), c.end(), ' '), c.end());
        sort(c.begin(), c.end());
        cout << c << endl;
    }
    return 0;
};