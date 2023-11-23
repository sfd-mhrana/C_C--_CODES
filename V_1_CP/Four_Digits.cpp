#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int a;
    cin >> a;
    string str = to_string(a);
    int length = str.length();
    string ab = "0000";
    string ac = ab.substr(0,4-length).append(str);
    cout << ac;

    return 0;
};