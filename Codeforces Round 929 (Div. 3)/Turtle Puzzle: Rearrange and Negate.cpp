#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin>>a;
        if(a<0){
            sum+= (a*-1);
        }else{
            sum+=a;
        }
    }
    cout<<sum<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
};