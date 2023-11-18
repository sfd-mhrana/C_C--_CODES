#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    double salary;

public:
    void setName(string empName)
    {
        name = empName;
    }

    void setSalary(double empSalary)
    {
        salary = empSalary;
    }

    string getName() const
    {
        return name;
    }

    double getYearlySalary() const
    {
        return salary * 12; // Assuming monthly salary
    }
};

int main()
{
    Employee emp;
    emp.setName("MD HOSSEN RANA");
    emp.setSalary(5000); // Assuming monthly salary of 5000

    cout << "Name: " << emp.getName() << endl;
    cout << "Yearly Salary: " << emp.getYearlySalary() << endl;

    return 0;
}
