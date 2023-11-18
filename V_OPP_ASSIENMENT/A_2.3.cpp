#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int id;
    string course;
    string section;

public:
    Student() : name("MD HOSSEN RANA"), id(42230200818), course("Computer Science"), section("D") {}
};

int main() {
    Student myself;

    // Default values will be assigned
    cout << "Name: " << myself.getName() << endl;
    cout << "ID: " << myself.getID() << endl;
    cout << "Course: " << myself.getCourse() << endl;
    cout << "Section: " << myself.getSection() << endl;

    return 0;
}
