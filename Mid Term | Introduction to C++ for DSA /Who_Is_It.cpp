#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Student
{
    public:

};

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        int te = 3;
        int idM = 9000, totalMM = 0;
        string nameM = "", sectionM = "";
        while (te--)
        {
            int id, totalM;
            string name, section;
            cin >> id >> name >> section >> totalM;
            if (totalM > totalMM)
            {
                idM = id;
                totalMM = totalM;
                nameM = name;
                sectionM = section;
            }
            else if (totalM == totalMM && id < idM)
            {
                idM = id;
                totalMM = totalM;
                nameM = name;
                sectionM = section;
            }
        }
        cout << idM << " " << nameM << " " << sectionM << " " << totalMM << endl;
    }

    return 0;
};