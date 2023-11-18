#include<stdio.h>
#include <string.h>
#define ll long long


int main(){
    char a[1001];
    scanf("%s",a);

    int size=strlen(a);

    int p=0;
    for(int i=0;i<size/2;i++){
        if(a[i]!=a[size-1-i]){
            printf("NO");
            p=1;
            break;
        }
    }

    if(!p){
        printf("YES");
    }


    return 0;
};