#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void insert_tail(Node *&head, Node *&tails, int val)
{
    Node *a = new Node(val);
    if (head == NULL)
    {
        head = a;
        tails = a;
        return;
    }
    tails->next = a;
    tails = a;
}

int main()
{
    ll max = 0, min = 0;
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
    }

    printList(head);

    return 0;
};