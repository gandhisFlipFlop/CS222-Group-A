#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <vector>
#include <map>
#include "Student.h"
#include "Professor.h"
#include "Course.h"
using namespace std;

class Admin : public User{
    private:
        // List of all students.
        vector<Student*> students;
        // List of all professors.
        vector<Professor*> professors;
        // List of all courses.
        vector<Course*> courses;
    public:
        void addStudent(Student* student);

        void addProfessor(Professor* professor);

        void addCourse(Course* course);

        void listStudents() const;

        void listProfessors() const;

        void listCourses() const;

        void viewProfile() const override;

};

#endif