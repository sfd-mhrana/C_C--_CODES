#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
}

int main()
{
    ll t;
    cin >> t;
    priority_queue<int> pq;
    priority_queue<int> pq1;

    while (t--)
    {
        int a;
        cin >> a;
        if (a % 2 == 0)
        {
            pq.push(a);
        }
        else
        {
            pq1.push(a);
        }
    }
    int sum = 0;
    int sum1 = 0;
    if (pq.size() > 0)
    {
        sum = pq.top();
        pq.pop();
        if (pq.size() > 0)
        {
            sum += pq.top();
        }
    }

    if (pq1.size() > 1)
    {
        sum1 = pq1.top();
        pq1.pop();
        sum1 += pq1.top();
    }

    cout << max(sum, sum1);
    return 0;
};