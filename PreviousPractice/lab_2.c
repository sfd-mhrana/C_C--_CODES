#include<stdio.h>
#include <string.h>
#define ll long long

struct Node
{
    int value;
    Node *next;
};

struct Node head=NULL;
struct Node tail=NULL;

void printNode(){
    struct Node *temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("%d",temp->value);
        temp=temp->next;
    }
    
}

void firstAdd(int value){
    struct Node *n=(struct Node*) malloc(sizeof(n));
    n->value=value;
    n->next=NULL;
    head=n;
    tail=n;
}

void addNode(int value){
    struct Node *n=(struct Node*) malloc(sizeof(n));
    n->value=value;
    n->next=NULL;
    
    tail->next=n;
    tail=n;
}

int main(){
    
    return 0;
};