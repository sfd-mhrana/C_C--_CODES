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

void insert(Node *&head, Node *&tails, int val, int x)
{
    Node *a = new Node(val);
    if (x == 0)
    {
        if (head == NULL)
        {
            head = a;
            tails = a;
            return;
        }
        else
        {
            a->next = head;
            head = a;
        }
    }
    else if (x == 1)
    {
        if (head == NULL)
        {
            head = a;
            tails = a;
            return;
        }
        tails->next = a;
        tails = a;
    }
    else
    {
        Node *temp = head;
        int i = 0;
        Node *prev = head;
        while (temp != NULL)
        {
            if (val == 0)
            {
                head = head->next;
                return;
            }
            else if (i == val)
            {

                prev->next = temp->next;
                if (temp->next == NULL)
                {
                    tails = prev;
                }
                return;
            }
            prev = temp;
            temp = temp->next;
            i++;
        }
    }
}

int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        insert(head, tail, v, x);
        printNode(head);
    }

    return 0;
};
