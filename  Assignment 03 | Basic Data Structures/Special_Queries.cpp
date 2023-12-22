#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int q;
    cin >> q;
    queue<string> que;

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 0)
        {
            string name;
            cin >> name;
            que.push(name);
        }
        else if (t == 1)
        {
            if (!que.empty())
            {
                cout << que.front() << endl;
                que.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
};