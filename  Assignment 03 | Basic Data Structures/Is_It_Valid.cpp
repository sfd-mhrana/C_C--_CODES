#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isValidString(const string &s)
{
    stack<char> stk;

    for (char ch : s)
    {
        if (stk.empty()) {
            stk.push(ch);
        }
        else {
            if (ch == '0' && stk.top() == '1'){
                stk.pop();
            }
            else if (ch == '1' && stk.top() == '0'){
                stk.pop();
            }
            else {
                stk.push(ch);
            }
        }
    }
    return stk.empty();
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool a = isValidString(s);
        if (a)
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