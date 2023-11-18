#include<stdio.h>
#include <string.h>
#define ll long long


int main(){
    int n;
    scanf("%d",&n);
    while (n--)
    {
        ll h,w;
        scanf("%lld %lld",&w,&h);
        if(h==w){
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
    }
    
    return 0;
};