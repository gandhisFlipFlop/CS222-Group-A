#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student : public User {
    private:
        vector<Course*> enrolledCourses //List of courses the student is enrolled in.
        //map<string, double> grades  //Map of course codes to grades.

    public:
        void enrollInCourse(Course* course) //Enroll the student in a course.
        void viewCourses() const //View all courses the student is enrolled in.
        void viewGrades() const //View grades for all enrolled courses.
        void viewProfile() const override //Display the student’s profile.

};