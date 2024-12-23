/**
 * Represents a single course, class method declaration.
 * 
 * @author  Shane T. Vest
 * @date    12/16/2024
 */

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <vector>
#include "User.h"
using namespace std;

// Meant to prevent circular dependencies.
class Professor;
class Student;

class Course{
    public:
        Professor* professor;   // the professor for the course.
        std::vector<Student*> enrolledStudents; // The students in this course.

    public: 
        std::string courseName; // Name of the course.
        std::string courseCode; // Course number.
        /**
         * Add student into the course.
         * 
         * @param   student The student to be added.
         */
        void addStudent(Student* student);

        /**
         * The professor assigned for the course. 
         * 
         * @param   professor   The professor.
         */
        void assignProfessor(Professor* professor);

        /**
         * Prints the details of the course. Name, code, and professor name.
         */
        void displayCourseDetails() const;

};

#endif