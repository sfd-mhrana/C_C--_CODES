#include<stdio.h>
#include <string.h>
#define ll long long

ll count=0;
int count(char s[],int i){
    if(s[i]=='\0'){
        return 0;
    }
    
    if(s[i]>='A' && s[i]<='Z'){
        s[i]=s[i]+32;
    }

    if(s[i])
}

int main(){
    
    char str[205];
    fgets(str,205,stdin)

    int v=count(str,0);
    printf("%d",v);

    return 0;
};