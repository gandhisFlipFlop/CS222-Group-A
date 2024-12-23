/**
 * Defintion of course classes.
 * 
 * @author  Kemal Bulkat
 * @date    12/22/2024
 */
#include "Course.h"
#include "Student.h"
#include "Professor.h"
#include <iostream>

using namespace std;

/**
 * Adds a student onto course list.
 * 
 * @param   student The student to be added.
 */
void Course::addStudent(Student* student) {
    enrolledStudents.push_back(student);
    cout << "Student " << student->name << " has been enrolled in " << courseName << ".\n";
}

/**
 * Assigns a professor to the course.
 * 
 * @param   professor   the professor to be assigned.
 */
void Course::assignProfessor(Professor* professor) {
    this->professor = professor;
}

/**
 * Prints out the details for a course.
 */
void Course::displayCourseDetails() const {
    cout << "Course: " << courseName << " Code: " << courseCode << " ";
    if (professor != nullptr) {
        cout << "Professor: " << professor->name;
    } else {
        cout << "No professor assigned";
    }
    cout << "\nEnrolled Students: " << enrolledStudents.size() << endl;
}
