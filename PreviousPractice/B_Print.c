#include<stdio.h>
#include <string.h>
#define ll long long

void print(ll a){
   for (ll i = 1; i <=a; i++)
   {
     printf("%lld",i);
     if(i!=a){
        printf(" ");
     }
   }
   
}

int main(){
    ll a,b;
    scanf("%lld",&a);
    print(a);
    return 0;
};