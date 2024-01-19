#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;

    priority_queue<ll, vector<ll>, greater<ll>> queue;
    for (ll i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        queue.push(v);
    }

    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll v;
        cin >> v;
        if (v == 0)
        {
            ll num;
            cin >> num;
            queue.push(num);
            cout << queue.top() << endl;
        }
        else if (v == 1)
        {
            if (!queue.empty())
            {
                cout << queue.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            if (!queue.empty())
            {
                queue.pop();
                if (!queue.empty())
                {
                    cout << queue.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
