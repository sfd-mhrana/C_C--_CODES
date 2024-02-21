#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int countA = 0;
    int countB = 0;
    for (int i = 0; i < 5; i++)
    {
        char a;
        cin >> a;
        if (a == 'A')
            countA++;
        else
            countB++;
    }
    if (countA > countB)
    {
        cout << 'A'<<endl;
    }
    else
    {
        cout << 'B'<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
};