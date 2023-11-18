#include<stdio.h>
#include <string.h>
#define ll long long


int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        ll n;
        ll arr[n];
        ll x;
        scanf("%lld",&n);
        for (ll i = 0; i < n; i++)
        {
            scanf("%lld",&arr[i]);
        }
        scanf("%lld",&x);

        int find=0;
        for (ll i = 0; i < n; i++)
        {
            if(arr[i]==x){
                find=1;
                break;
            }
        }
        if(find){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }

    return 0;
};
