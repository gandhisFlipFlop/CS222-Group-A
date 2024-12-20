#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "User.h"
#include "Student.h"
#include "Course.h"
#include <map>
#include <vector>
using std::vector;
using namespace std;

class Professor : public User {
private:
    vector<Course*> taughtCourses;

public:
    Professor(const string& name);
    const vector<Course*>& getTaughtCourses() const;
    void viewProfile() const override;
    void assignGrade(Student* student, string courseCode, double grade);
    void viewCourses() const;
    void viewProfile() const override;

};

#endif
