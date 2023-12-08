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

Node *inputNode(int *s)
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    int i = 0;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, tail, value);
        i++;
    }
    *s = i;
    return head;
}

bool areNodeEqual(Node *l1, Node *l2)
{
    while (l1 != NULL && l2 != NULL)
    {
        if (l1->val != l2->val)
        {
            return false;
        }
        l1 = l1->next;
        l2 = l2->next;
    }

    return (l1 == NULL && l2 == NULL);
}

int main()
{
    int oneS = 0, twoS = 0; // For Test index. 
    Node *one = inputNode(&oneS);
    Node *two = inputNode(&twoS);
    bool a = areNodeEqual(one, two);
    if (a)
        cout << "YES";
    else
        cout << "NO";
    return 0;
};
