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
    ll max = INT_MIN, min = INT_MAX;
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

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > max)
            max = temp->val;
        if (temp->val < min)
            min = temp->val;
        temp = temp->next;
    }

    cout << max-min;

    return 0;
};
