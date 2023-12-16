#include <bits/stdc++.h>
using namespace std;

#define ll long long

void printList(list<int> &myList)
{
    cout << "L -> ";
    for (int elem : myList)
    {
        cout << elem << " ";
    }
    cout << "\n";

    cout << "R -> ";
    for (auto it = myList.rbegin(); it != myList.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << "\n";
}

int main()
{
    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
        {
            l.push_back(v);
        }
        else
        {
            if (v >= 0 && v < l.size())
            {
                auto it = l.begin();
                advance(it, v);
                l.erase(it);
            }
        }
        printList(l);
    }
    return 0;
};