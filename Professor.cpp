#include "Professor.h"
#include <iostream>
#include <string>
using std::vector;
using namespace std;


Professor::Professor() {}
const vector<Course*>& Professor::getTaughtCourses() const
{
    return taughtCourses;
}
void Professor::viewProfile() const
{
    cout << "Professor Name: " << name << endl;
    cout << "Number of courses taught: " << taughtCourses.size() << endl;

    if (!taughtCourses.empty())
    {
        cout << "Courses taught: ";
        for (size_t i = 0; i < taughtCourses.size(); ++i)
        {
            if (i > 0) cout << ", ";
            taughtCourses[i]->displayCourseDetails();
        }
        cout << endl;
    }
}
void Professor::assignGrade(Student* student, string courseCode, double grade) {
    string code = courseCode;
    double newGrade = grade;
    Student* stud = student;

    stud->newGrade(code, newGrade);
    cout << "Grade " << newGrade << " assigned to " << stud->getName() << " for course " << code << ".\n";
}
void Professor::viewCourses() const 
{
    for (int i = 0; i < taughtCourses.size(); i++) {
        taughtCourses[i]->displayCourseDetails();
    }
}
