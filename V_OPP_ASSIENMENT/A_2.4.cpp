#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int id;
    string course;
    string section;

public:
    Student(std::string studentName, int studentID, string studentCourse, string studentSection)
        : name(studentName), id(studentID), course(studentCourse), section(studentSection) {}

    string getName() const
    {
        return name;
    }

    int getID() const
    {
        return id;
    }

    string getCourse() const
    {
        return course;
    }

    string getSection() const
    {
        return section;
    }
};

int main()
{
    Student myself("MD HOSSEN RANA", 42230200818, "Computer Science", "D");

    cout << "Name: " << myself.getName() << endl;
    cout << "ID: " << myself.getID() << endl;
    cout << "Course: " << myself.getCourse() << endl;
    cout << "Section: " << myself.getSection() << endl;

    return 0;
}
