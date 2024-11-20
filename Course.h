#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <vector>
using namespace std;

class Professor;
class Student;

class Course{
    private:
        std::string courseName;
        std::string courseCode;
        Professor* professor;
        std::vector<Student*> enrolledStudents;

    public:
        void addStudent(Student* student);
        void assignProfessor(Professor* professor);
        void displayCourseDetails() const;

};

#endif