#include <bits/stdc++.h>
using namespace std;

#define ll long long
int countDivisors(int n)
{
    int count = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                count++;
            }
            else
            {
                count += 2;
            }
        }
    }
    return count;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        if (countDivisors(n) == 3)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
};