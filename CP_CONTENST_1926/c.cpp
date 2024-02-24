#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    const int N = int(2e5) + 10;
    vector<int> v(N);

    for (int i = 1; i < N; i++)
    {
        v[i] = v[i - 1];
        int x = i;
        while (x > 0)

        {
            v[i] += x % 10;
            x = x / 10;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        cout << v[n] << endl;
    }

    return 0;
};
