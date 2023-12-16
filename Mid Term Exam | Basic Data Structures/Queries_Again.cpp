#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int v)
    {
        val = v;
        prev = NULL;
        next = NULL;
    }
};

void printLeftToRight(Node *head)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void printRightToLeft(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertAtIndex(Node *&head, Node *&tail, int index, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL && index == 0)
    {
        head = newNode;
        tail = newNode;
    }
    else if (head != NULL && index == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL && count < index)
        {
            count++;
            if (count == index && temp->next != NULL)
            {
                newNode->next=temp->next;
                temp->next->prev=newNode;
                temp->next = newNode;
                newNode->prev = temp;
                break;
            }
            else if (count == index && temp->next == NULL)
            {
                newNode->next = NULL;
                newNode->prev = temp;
                temp->next = newNode;
                tail = newNode;
                break;
            }
            temp = temp->next;
        }

        if (temp == NULL && count <= index)
        {
            cout << "Invalid" << endl;
            return;
        }
    }
    printLeftToRight(head);
    printRightToLeft(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int x, v;
        cin >> x >> v;
        insertAtIndex(head, tail, x, v);
    }

    return 0;
}