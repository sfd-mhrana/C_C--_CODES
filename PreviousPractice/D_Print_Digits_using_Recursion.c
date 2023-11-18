#include<stdio.h>
#include <string.h>
#define ll long long

void printD(ll n){
    
    ll d=n%10;
    n=n/10;
    
    if(n!=0){
       printD(n);
    }
    printf("%lld ",d);
}

int main(){
    ll r;
    scanf("%lld",&r);
    while (r--)
    {
        ll n;
        scanf("%lld",&n);
        printD(n);
        printf("\n");
    }
    

    return 0;
};