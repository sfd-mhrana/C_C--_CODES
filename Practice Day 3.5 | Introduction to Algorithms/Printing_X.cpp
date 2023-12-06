#include <bits/stdc++.h>
using namespace std;

#define ll long long;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n / 2 && i == n / 2)
            {
                cout << "X";
            }
            else if (j == i)
            {
                cout << "\\";
            }
            else if (j == n - i - 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;

    printPattern(N);

    return 0;
}
