#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        cout << "ALPHA\n";
        cout << "IS CAPITAL";
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << "ALPHA\n";
        cout << "IS SMALL";
    }else{
        cout<<"IS DIGIT";
    }
    return 0;
};