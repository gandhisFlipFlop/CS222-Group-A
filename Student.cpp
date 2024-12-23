#include "Professor.h"
#include "Student.h"
#include "Grade.h"
#include "Course.h"
#include "User.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;


void Student::enrollInCourse(Course* course){ 
    
    enrolledCourses.push_back(course);
    cout << "Enrolled in the course.\n";}

void Student::viewCourses() const { 

    if (enrolledCourses.empty()) {
        cout << "Not enrolled in any courses.\n";
        return;
    }

    cout << "Enrolled courses:\n";
    for (int i = 0; i < enrolledCourses.size(); i++) {
        cout << i + 1 << ".";
        enrolledCourses[i]->displayCourseDetails(); << endl;
    }

}

void Student::viewGrades() const { //View grades for all enrolled courses.

    if (enrolledCourses.empty()) {
        cout << "You are not enrolled in any courses." << endl;
        return;
    }
    cout << "\nYour Grades:" << endl;
    cout << "----------------------------------" << endl;

    for (Course* course : enrolledCourses) {
        auto gradeIt = grades.find(course->courseCode);
        cout << "Course: ";
        course->displayCourseDetails();

        if (gradeIt != grades.end()) {
            gradeIt->second.displayGrade();  
        } else {
            cout << "No grade recorded yet." << endl;
        }
        cout << "------------------------------" << endl;
    }
}


void Student::viewProfile() const override { //Display the student’s profile.

    User::viewProfile();   

    cout << "Role: Student" << endl;
    cout << "Enrolled Courses: " << enrolledCourses.size() << endl;

}
