/**
 * Represents a single professor, declaration of class methods.
 * 
 * @author  Shane T. Vest
 * @date    12/16/2024
 */

#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "User.h"
#include "Student.h"
#include "Course.h"
#include "Grade.h"
#include <iostream>
#include <map>
#include <vector>
#include <list>

class Professor : public User{
    public:
        vector<Course*> taughtCourses;
        
    public:
        //void assignGrade(Student* student, string courseCode, double grade);
        /**
         * Assigns a grade to a student.
         * 
         * @param   student     The student being assigned.
         * @param   courseCode  The course number for the student.
         * @param   grade       The grade that is being assigned.
         */
        void assignGrade(Student* student, string courseCode, Grade<double>* grade);

        /**
         * Prints out the courses the student's enrolled in.
         */
        void viewCourses() const;

        /**
         * Prints out the user's information.
         */
        void viewProfile() const override;

};

#endif