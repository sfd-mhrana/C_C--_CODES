#include<stdio.h>
#include <string.h>
#define ll long long

ll n;
void print(){
    printf("%lld",n);
    if(n!=1){
        printf(" ");
    }
    n--;
    if(n!=0){
        print();
    }
}

int main(){
    scanf("%lld",&n);
    print();
    return 0;
};