#include "Admin.h"
#include <string>

void Admin::addStudent(Student* student){
    string name;
    cout << "Enter student name: ";
    cin >> name;
    students.push_back(student);

    cout << "Student " << name << " added successfully.\n";
}

void Admin::addProfessor(Professor* professor){
    string profName;
    Professor prof = *professor;
    cout << "Enter professor name: ";
    getline(cin >> ws, profName);

}

/**
 * Adds a course to the list of course.
 * 
 * @param course    The course that is to be added.
 */
void Admin::addCourse(Course* course){
    string name;
    string code;
    string professor;

    cout << "Enter course name: ";
    cin >> name;
    cout << "Enter course code: ";
    cin >> code;

    // Add course to list of courses.
    courses.push_back(course);
}

/**
 * Lists the students in the system.
 */
void Admin::listStudents() const{
    for (int i = 0; i < students.size(); i++)
        students[i]->viewProfile();
}

/**
 * Lists professors in the system.
 */
void Admin::listProfessors() const{
    for (int i = 0; i < professors.size(); i++)
        professors[i]->viewProfile();
}

/**
 * Lists courses in the system.
 */
void Admin::listCourses() const{
    for (int i = 0; i < courses.size(); i++)
        courses[i]->displayCourseDetails();
}

/**
 * Views the profile of the admin.
 */
void Admin::viewProfile() const{

}