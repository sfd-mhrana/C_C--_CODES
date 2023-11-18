#include<stdio.h>
#include <string.h>
#define ll long long

int n;
void print(){
    printf("I love Recursion\n");
    n--;
    if(n!=0){
        print();
    }
}

int main(){
    scanf("%d",&n);
    print();
    return 0;
};