#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool customSort(const pair<string, ll> &a, const pair<string, ll> &b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    vector<pair<string, ll>> vec;
    ll n;
    cin >> n;
    while (n--)
    {
        pair<string, ll> pr;
        string a;
        cin >> a;
        ll k;
        cin >> k;
        pr = make_pair(a, k);
        vec.push_back(pr);
    }
    sort(vec.begin(), vec.end(), customSort);

    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << (*it).first << ' ' << (*it).second << endl;
    return 0;
};