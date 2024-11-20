#include "Professor.h"

void Professor::assignGrade(Student* student, string courseCode, double grade){
    string code = courseCode;
    double newGrade = grade;
    Student *stud = student;
}
void Professor::viewCourses() const{
    for (int i = 0; i < taughtCourses.size(); i++){
        taughtCourses[i]->displayCourseDetails();
    }
}
void Professor::viewProfile() const {

}