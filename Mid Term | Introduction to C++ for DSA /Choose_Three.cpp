#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPossibleSum(int arr[], int n, int s)
{
    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = i + 1; j < n - 1; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    return true;
                }
            }
        }
    }

    return false;
}

void solve()
{
    int n, s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (isPossibleSum(arr, n, s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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