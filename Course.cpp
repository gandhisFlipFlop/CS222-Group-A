#include "Course.h"
#include "Student.h"
#include "Professor.h"
#include <iostream>

using namespace std;


void Course::addStudent(Student* student) {
    
    enrolledStudents.push_back(student);
    cout << "Student " << student->name << " has been enrolled in " << courseName << ".\n";
}


void Course::assignProfessor(Professor* professor) {
   
}

void Course::displayCourseDetails() const {
    cout << "Course: " << courseName << " Code: " << courseCode << endl;
    if (professor != nullptr) {
        cout << "Professor: " << professor->name;
    } else {
        cout << "No professor assigned";
    }
    cout << "\nEnrolled Students: " << enrolledStudents.size() << endl;
}