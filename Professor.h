#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "User.h"
#include "Student.h"
#include "Course.h"
#include <map>
#include <vector>

class Professor : public User{
    private:
        vector<Course*> taughtCourses;

        
    public:
        void assignGrade(Student* student, string courseCode, double grade);
        void viewCourses() const;
        void viewProfile() const override;

};

#endif