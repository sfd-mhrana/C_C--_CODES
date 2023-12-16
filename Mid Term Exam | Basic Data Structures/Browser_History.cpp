#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Node
{
public:
    string val;
    Node *prev;
    Node *next;

    Node(string v)
    {
        val = v;
        prev = NULL;
        next = NULL;
    }
};

void insertNode(Node **head, Node **tail, string val)
{
    Node *newNode = new Node(val);
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

bool found(Node *&head, string value, Node *&current)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == value)
        {
            current = temp;
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        string input;
        cin >> input;
        if (input == "end")
            break;
        insertNode(&head, &tail, input);
    }
    int q;
    cin >> q;
    Node *current = NULL;
    string value;
    getline(cin, value);
    for (int i = 0; i < q; i++)
    {
        getline(cin, value);
        if (value.substr(0, 5) == "visit")
        {
            string address = value.substr(6);
            bool v = found(head, address, current);
            if (v)
            {
                cout << address << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (value == "next")
        {
            if (current != NULL && current->next != NULL)
            {
                cout << current->next->val << endl;
                current = current->next;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (value == "prev")
        {
            if (current != NULL && current->prev != NULL)
            {
                cout << current->prev->val << endl;
                current = current->prev;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}