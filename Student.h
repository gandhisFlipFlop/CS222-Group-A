/**
 * Represents a single student. 
 * 
 * @author  Shane T. Vest
 * @date    12/16/2024
 */

#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include "Grade.h"
#include "Course.h"
#include <map>
#include <vector>
#include <list>

class Course;

class Student : public User{
    public:
        vector<Course*> enrolledCourses;
        //map<string, double> grades;
        map<string, vector<Grade<double>>> grades;

    public:
        /**
         * Allows student to enroll in the course.
         */
        void enrollInCourse(Course* course);
        void viewCourses() const;
        void viewGrades() const;
        void viewProfile() const override;

};
#endif