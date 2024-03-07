#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++)
    {
        for (ll j = 0; j < t - i - 1; j++)
        {
            cout << " ";
        }
        for (ll j = 0; j < (t * 2) + i * 2; j++)
        {
            if (j < t - i || j > ((t * 2) + i * 2) - (t - i + 1))
                cout << "*";
            else
                cout << " ";
        }

        for (ll j = 0; j < t - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (ll i = t-2; i > =0; i--)
    {
        for (ll j = 0; j < t - i - 1; j++)
        {
            cout << " ";
        }
        for (ll j = 0; j < (t * 2) + i * 2; j++)
        {
            if (j < t - i || j > ((t * 2) + i * 2) - (t - i + 1))
                cout << "*";
            else
                cout << " ";
        }

        for (ll j = 0; j < t - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
};