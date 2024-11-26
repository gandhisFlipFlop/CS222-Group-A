#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Course {
    private:
        string courseName;
        string courseCode;
        Professor* professor;
        vector<Student*> enrolledStudents;

    public:
        void addStudent(Student* student){}  // Add a student to the course.
        void assignProfessor(Professor* professor){}  // Assign a professor to the course.
        void displayCourseDetails() const {}  // Display course details, including name, code, and professor.

};