#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll getDigitSum(ll num)
{
    ll sum = 0;
    while (num > 0)
    {
        ll last = num % 10;
        sum += last;
        num /= 10;
    }
    return sum;
}
void solve()
{
    ll num;
    cin >> num;
    ll sum = 0;
    for (ll i = 1; i <= num; i++)
    {
        if (i > 9)
        {
            sum += getDigitSum(i);
        }
        else
        {
            sum += i;
        }
    }
    cout << sum << endl;
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