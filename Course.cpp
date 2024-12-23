#include "Course.h"
#include "Student.h"
#include "Professor.h"
#include <iostream>

using namespace std;


void Course::addStudent(Student* student) {
    for (Student* existingStudent : enrolledStudents) {
        if (existingStudent == student) {
            cout << "Student " << student->name << " is already enrolled in this course.\n";
            return;
        }
    }
    
    enrolledStudents.push_back(student);
    cout << "Student " << student->name << " has been enrolled in " << courseName << ".\n";
}


void Course::assignProfessor(Professor* professor) {
    this->professor = professor;
    bool courseFound = false;
    for (Course* course : professor->taughtCourses) {
        if (course == this) {
            courseFound = true;
            break;
        }
    }
    
    if (!courseFound) {
        professor->taughtCourses.push_back(this);
    }
    
    cout << "Professor " << professor->name << " has been assigned to teach " << courseName << ".\n";
}

void Course::displayCourseDetails() const {
    cout << "Course: " << courseName << " (Code: " << courseCode << ")";
    if (professor != nullptr) {
        cout << " - Professor: " << professor->name;
    } else {
        cout << " - No professor assigned";
    }
    cout << "\nEnrolled Students: " << enrolledStudents.size() << endl;
}