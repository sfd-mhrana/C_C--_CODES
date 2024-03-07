#include <bits/stdc++.h>
using namespace std;

#define ll long long


bool subsetSum(ll n, ll a[], ll s) { 
    bool dp[n + 1][s + 1]; 
    memset(dp, false, sizeof(dp)); 
    dp[0][0] = true; 
    for (ll i = 1; i <= n; i++) { 
        for (ll j = 0; j <= s; j++) { 
            if (a[i - 1] <= j) { 
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j]; 
            } else { 
                dp[i][j] = dp[i - 1][j]; 
            } 
        } 
    } 
    return dp[n][s]; 
} 


void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll s = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    if (s % 2 == 0 && subsetSum(n, a, s / 2))
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
};