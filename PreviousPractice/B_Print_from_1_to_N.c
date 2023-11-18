#include<stdio.h>
#include <string.h>
#define ll long long

ll n;
ll t=0;
void print(){
    printf("%lld\n",t+1);
    t++;
    if(t!=n){
        print();
    }
}

int main(){
    scanf("%lld",&n);
    print();
    return 0;
};