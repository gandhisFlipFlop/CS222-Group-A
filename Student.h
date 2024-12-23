#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"
#include "Course.h"
#include <map>
#include <vector>

class Course;

class Student : public User{
    public:
        vector<Course*> enrolledCourses;
        map<string, vector<Grade<double>>> grades;
    public:
        void enrollInCourse(Course* course);
        void viewCourses() const;
        void viewGrades() const;
        void viewProfile() const override;

};

#endif
