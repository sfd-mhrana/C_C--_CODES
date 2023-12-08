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
    int n;
    cin >> n;
    while (n--)
    {
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
        int find;
        cin >> find;
        int findI = -1;

        Node *temp = head;
        int i = 0;
        while (temp != NULL)
        {
            if (temp->val == find)
            {
                findI = i;
                break;
            }
            i++;
            temp = temp->next;
        }
        cout<<findI<<endl;
    }

    return 0;
};
