#include <bits/stdc++.h>
using namespace std;

#define ll long long

int getLengthOfOne(int num)
{
    int length = 0;
    while (num > 0)
    {
        int last = num % 10;
        if (last == 1)
            length++;
        num /= 10;
    }
    return length;
}

void solve()
{
    int a;
    cin >> a;
    int count = 0;

    bool isT = false;
    int pre = 0;
    for (int i = 0; i < a; i++)
    {
        int num;
        cin >> num;
        int length = getLengthOfOne(num);
        if (length > 0)
        {
            if (length + 2 == pre || length - 2 == pre)
            {
                isT = true;
            }
            else
            {
                isT = false;
            }
            pre = length;
        }
    }
    if (!isT)
    {
        cout << "SQUARE" << endl;
    }
    else
    {
        cout << "TRIANGLE" << endl;
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