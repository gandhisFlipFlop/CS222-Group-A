/**
 * The admin's prompts, class method declarations.
 * 
 * @author  Shane T. Vest
 * @date    12/16/2024
 */

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
    public:
        // List of all students.
        vector<Student*> students;
        // List of all professors.
        vector<Professor*> professors;
        // List of all courses.
        vector<Course*> courses;
    public:
        /**
         * Declaration of addStudent method.
         */
        void addStudent(Student* student);

        /**
         * Declaration of addProfessor method.
         */
        void addProfessor(Professor* professor);

        /**
         * Declaration of addCourse method.
         */
        void addCourse(Course* course);

        /**
         * Declaration of listStudents method.
         */
        void listStudents() const;

        /**
         * Declaration of listProfessors method.
         */
        void listProfessors() const;

        /**
         * Declaration of listCourses method.
         */
        void listCourses() const;

        /**
         * Declaration of viewProfile method.
         */
        void viewProfile() const override;

        bool findCourse(int courseChoice);
};

#endif
