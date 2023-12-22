#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isEmpty(const string &s)
{
    stack<char> stk;

    for (char ch : s)
    {
        if (stk.empty())
        {
            stk.push(ch);
        }
        else
        {
            if (ch == '1' && stk.top() == '0')
            {
                stk.pop();
            }
            else
            {
                stk.push(ch);
            }
        }
    }
    return stk.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool v = isEmpty(s);
        if (v)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
};