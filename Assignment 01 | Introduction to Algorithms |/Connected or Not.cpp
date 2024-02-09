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
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        bool find=false;
        if(a==b){
             cout<<"YES"<<endl;
             continue;
        }
        for (int c : vc[a])
        {
            if(c==b){
                find=true;
            }
        }
        if(find){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
};