#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Student
{
public:
    string name;
    ll roll;
    ll marks;
    Student(string n,
            ll r,
            ll m)
    {
        name = n;
        roll = r;
        marks = m;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks > b.marks)
        {
            return false;
        }
        else if (a.marks < b.marks)
        {
            return true;
        }
        else
        {
            if (a.roll > b.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    };
};

Student inputStudent()
{
    string name;
    ll roll;
    ll marks;
    cin >> name >> roll >> marks;
    Student a(name, roll, marks);
    return a;
}

void printStudent(Student a)
{
    cout << a.name << " " << a.roll << " " << a.marks << endl;
}

int main()
{
    ll n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (ll i = 0; i < n; i++)
    {
        Student a = inputStudent();
        pq.push(a);
    }

    // while (!pq.empty())
    // {
    //     cout << pq.top().name << pq.top().roll << pq.top().marks << endl;
    //     pq.pop();
    // }

    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        ll v;
        cin >> v;
        if (v == 0)
        {
            Student a = inputStudent();
            pq.push(a);
            printStudent(pq.top());
        }
        else if (v == 1)
        {
            if (!pq.empty())
            {
                printStudent(pq.top());
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    printStudent(pq.top());
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
