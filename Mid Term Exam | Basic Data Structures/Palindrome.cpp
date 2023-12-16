#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
};

Node *createNode(int val)
{
    Node *newNode = new Node();
    newNode->val = val;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertNode(Node **head, Node **tail, int val)
{
    Node *newNode = createNode(val);
    if (*head == NULL)
    {
        *head = newNode;
        *tail = newNode;
    }
    else
    {
        (*tail)->next = newNode;
        newNode->prev = *tail;
        *tail = newNode;
    }
}

string isPalindrome(Node *head, Node *tail)
{
    while (head != NULL && tail != NULL)
    {
        if (head->val != tail->val)
        {
            return "NO";
        }
        head = head->next;
        tail = tail->prev;
    }
    return "YES";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insertNode(&head, &tail, v);
    }
    string out = isPalindrome(head, tail);
    cout << out;
    return 0;
};