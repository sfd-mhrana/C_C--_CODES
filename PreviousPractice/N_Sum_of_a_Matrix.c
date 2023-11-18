#include<stdio.h>
#include <string.h>
#define ll long long

void printD(ll n){
    
    ll d=n%10;
    n=n/10;
    printf("%lld ",d);
    if(n==0){
        return;
    }else{
        printD(n);
    }
}

int main(){
    ll r;
    scanf("%lld",&r);

    printD(r);

    return 0;
};