#include<stdio.h>
#include <string.h>
#define ll long long


int main(){
    ll n;
    scanf("%lld",&n);

    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
    

    ll min=a[0],max=a[0],minI=0,maxI=0;

    for (ll i = 1; i < n; i++)
    {
        if(a[i]>=max){
            max=a[i];
            maxI=i;
        }

        if(a[i]<=min){
            min=a[i];
            minI=i;
        }
    }
    

    //Swap 
    ll temp=a[minI];
    a[minI]=a[maxI];
    a[maxI]=temp;

    for (ll i = 0; i < n; i++)
    {
        printf("%lld ",a[i]);
    }
    

    return 0;
};