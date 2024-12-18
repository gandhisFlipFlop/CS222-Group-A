#include "Admin.h"
#include <string>

/**
 * The function `addStudent` in the Admin class adds a student to a list of students with a given name.
 * 
 * @param student The `student` parameter in the `addStudent` method is a pointer to an object of type
 * `Student`.
 */
void Admin::addStudent(Student* student){
    cout << "Enter student name: ";
    cin >> name; 
    cin.ignore(); // Ignores the newline character.
    student->name = name;
    students.push_back(student);
    cout << "Student " << name << " added successfully.\n";
}

/**
 * The function `addProfessor` in the Admin class allows for adding a new Professor object to a list of
 * professors with a specified name.
 * 
 * @param professor The `professor` parameter is a pointer to an object of type `Professor`.
 */
void Admin::addProfessor(Professor* professor){
    string profName;
    Professor prof = *professor;
    cout << "Enter professor name: ";
    getline(cin >> ws, profName);
    prof.name = profName;
    professors.push_back(professor);

}

/**
 * Adds a course to the list of course.
 * 
 * @param course    The course that is to be added.
 */
void Admin::addCourse(Course* course){
    string name;
    string code;

    cout << "Enter course name: ";
    cin >> name;
    cout << "Enter course code: ";
    cin >> code;
    cout << "Please assign a professor to this course.\n";
    for (int i = 0; i < professors.size(); i++){
        cout << i + 1 << ". ";
        professors[i]->viewProfile();
    }
    int choice;
    cout << "Select professor (list number): ";
    cin >> choice;
    course->courseName = name;
    course->courseCode = code;
    course->professor = professors[choice - 1];
    professors[choice - 1]->taughtCourses.push_back(course);

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
void Admin::viewProfile() const {
    cout << "Name: " << name << endl;
    cout << "Role: Admin" << endl;
}