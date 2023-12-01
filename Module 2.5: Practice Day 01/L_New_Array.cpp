#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> g1(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> g1[i];
    }

    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
    return 0;
}
