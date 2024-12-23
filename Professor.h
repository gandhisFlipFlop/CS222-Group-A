/**
 * Represents a single professor.
 *
 * @author  Evalee R. Meyer
 * @date    12/22/2024
 */

#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "User.h"
#include "Course.h"
#include "Grade.h"
#include "Student.h"
#include <vector>
#include <string>
using namespace std;

class Course;
class Student;

class Professor : public User {
public:
    // List of courses the professor teaches.
    vector<Course*> taughtCourses; 

    /**
     * Assigns a grade to a student for a specific course.
     *
     * @param student      The student to assign the grade.
     * @param courseCode   The course in which the grade is assigned.
     * @param grade        The grade object.
     */
    // Shane: I fixed the courseCode parameter.
    void assignGrade(Student* student, string courseCode, Grade<double>* grade);

    /**
     * Prints all the courses the professor is teaching.
     */
    void viewCourses() const;

    /**
     * Displays the professor's profile.
     */
    void viewProfile() const override;
};

#endif
