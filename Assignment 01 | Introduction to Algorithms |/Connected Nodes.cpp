#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<int> vc[1005];

int main()
{

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        vc[a].push_back(b);
        vc[b].push_back(a);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin>>x;
        vector<int> vec = vc[x];
        if (vec.size())
        {
            sort(vec.begin(), vec.end(),greater<int>());
            for (int c : vec)
            {
                cout<<c<<" ";
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
};