#include <bits/stdc++.h>
using namespace std;

#define ll long long

void inputArray(ll arr[], ll size)
{
    for (ll i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(ll arr[], ll size)
{
    for (ll i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

ll *sort_it(ll size)
{
    ll *arr = new ll[size];
    inputArray(arr, size);
    sort(arr, arr + size, greater<ll>());
    return arr;
}

int main()
{
    ll n;
    cin >> n;

    ll *arr = sort_it(n);

    printArray(arr, n);


    return 0;
};
