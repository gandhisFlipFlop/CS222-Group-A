/**
 * Represents a single professor.
 *
 * @author  Evalee R. Meyer
 * @date    12/22/2024
 */

#include "Professor.h"
#include "Student.h"
#include "Grade.h"
#include <iostream>
using namespace std;
 /**
  * Assigns a grade to a student for a specific course.
  *
  * @param student      The student to assign the grade.
  * @param courseCode   The course in which the grade is assigned.
  * @param grade        The grade object.
  */

// Shane: I just fixed the courseCode parameter, that's all.
void Professor::assignGrade(Student* student, string courseCode, Grade<double>* grade) {
    // Default grade type; can be updated.
    //grade->gradeType = "Assignment"; 
    
    // Shane (12/22/2024) Implementation of grade type. Rest is done by Evalee.
    cout << "Enter assignment type name: ";
    cin >> grade->gradeType;

    cout << "Enter grade (percentage): ";
    cin >> grade->grade;

    // Add the grade to the student's grades map.
    student->grades[courseCode].push_back(*grade);

    cout << "Grade " << grade->grade << "% assigned to " << student->name
        << " in course " << courseCode << ".\n";
}

/**
 * Prints all the courses the professor is teaching.
 */
void Professor::viewCourses() const {
    if (taughtCourses.empty()) {
        cout << "You are not teaching any courses.\n";
        return;
    }

    cout << "Courses you teach:\n";
    for (size_t i = 0; i < taughtCourses.size(); ++i) {
        cout << i + 1 << ". ";
        taughtCourses[i]->displayCourseDetails();
    }
}

/**
 * Displays the professor's profile.
 */
void Professor::viewProfile() const {
    cout << "Professor: " << name << endl;
}
