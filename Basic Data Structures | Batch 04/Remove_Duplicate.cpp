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

Node *inputNode(int *s, Node *&tailV)
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
    tailV = tail;
    *s = i;
    return head;
}

void printNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void removeDuplicates(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        Node *runner = temp;
        while (runner->next != NULL)
        {
            if (runner->next->val == temp->val)
            {
                Node *duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            }
            else
            {
                runner = runner->next;
            }
        }
        temp = temp->next;
    }
}

int main()
{
    int oneS = 0; // For Test index.
    Node *tail;
    Node *head = inputNode(&oneS, tail);

    removeDuplicates(head);
    printNode(head);

    return 0;
};
