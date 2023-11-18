#include<stdio.h>
#include <string.h>
#define ll long long

void sum(int a,int b){
    int sum=a+b;
    printf("%d",sum);
}

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);
    return 0;
};