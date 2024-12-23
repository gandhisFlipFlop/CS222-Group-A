/**
 * Definition declaration of the Student class. 
 * 
 * @author  Shane T. Vest
 * @date    12/16/2024
 */

#include "Student.h"
#include "Grade.h"

/**
 * Allows a student to enroll in a course from the admin's list.
 * 
 * @param   course  A course object, the course the student's enrolling in.
 */
void Student::enrollInCourse(Course* course){
    enrolledCourses.push_back(course);
    //cout << "Enrolled in course " << course->courseName << course->courseCode << endl;
    Course newCourse = *enrolledCourses[enrolledCourses.size() - 1];
    cout << "Enrolled in course ";
    newCourse.displayCourseDetails();
}

/**
 * Prints out all the courses a student is enrolled in.
 */
void Student::viewCourses() const{
    if (enrolledCourses.size() > 0){
        for (int i = 0; i < enrolledCourses.size(); i++)
        enrolledCourses[i]->displayCourseDetails();
    }
    else
        cout << "You are not enrolled in any classes.\n";
}

/**
 * Prints out all the student's grades in all their classes. 
 */
void Student::viewGrades() const{
    double totalGrade = 0;
    
    for (const auto& pair : grades){
        for (int i = 0; i < pair.second.size(); i++){
            cout << "Course code: " << pair.first;

            // Prints the student's grade.
            pair.second[i].displayGrade();

            // Gets number for each grade.
            totalGrade += pair.second[i].grade;
        }
        // Prints the number of graded assignments in this student's class. 
        //cout << "Number of grades in class: " << pair.second.size() << endl;  
        cout << "Course code: " << pair.first;
        totalGrade /= pair.second.size();
        cout << ", Total grade: " << totalGrade << "%\n" << endl;
        totalGrade = 0; // Resets the total grade for the other classes. 
    }

    // To handle empty grades.
    if (grades.size() == 0)
        cout << "No grades have been assigned!\n";
    
}

/**
 * Prints out the user's name, or other profile information. 
 */
void Student::viewProfile() const{
    string Name = User::name;
    cout << "Name: " << name << endl;
}
