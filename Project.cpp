/**
 * The main system, which includes a menu for student, professor, and admin.
 * 
 * @author  Shane T. Vest
 * @date    11/21/2024
 */

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "Admin.h"
#include "Course.h"
#include "Grade.h"
using namespace std;

/**
 * This is the menu for Admin.
 * Allows for admin's prompts.
 */
void adminMenu(){
    Admin admin;
    int choice;

    do{
        cout << "\nAdmin Menu\n" <<
        "1. Add a student\n" << 
        "2. Add a professor\n" << 
        "3. Add a course\n" <<
        "4. List all students\n" <<
        "5. List all professors\n" << 
        "6. List all courses\n" <<
        "7. Exit\n" <<
        "Please enter your choice (1-7): ";

        cin >> choice;

        // Adds a student to the system.
        if (choice == 1){
            Student student;
            admin.addStudent(&student);
        }
        // Adds a professor to the system.
        else if (choice == 2){
            Professor prof;
            admin.addProfessor(&prof);

        }
        // Add a new course.
        else if (choice == 3){
            Course newCourse;
            admin.addCourse(&newCourse);
        }
        // Lists all students in system.
        else if (choice == 4){
            admin.listStudents();
        }
        // Lists all professors in system.
        else if (choice == 5){
            admin.listProfessors();
        }
        // Lists all courses in system.
        else if (choice == 6){
            admin.listCourses();
        }
        // Exits system.
        else if (choice == 7)
            cout << "Exiting Admin menu...\n";
        
    }while (choice != 7);
}

/**
 * This is the student menu
 */
void studentMenu(){
    Student student;
    int choice;

    do{
        cout << "\nStudent Menu\n" <<
        "1. Enroll in a course\n" << 
        "2. view enrolled courses\n" << 
        "3. View grades\n" <<
        "4. Exit the Student menu\n" <<
        "Please enter your choice (1-4): ";

        cin >> choice;
        // Student enrolls in a course.
        if (choice == 1){
            Course course;
            student.enrollInCourse(&course);
        }
        else if (choice == 2)   // Lists all the courses the student's enrolled in.
            student.viewCourses();
        else if (choice == 3)
            student.viewGrades();// Views all the student's grades.
        else if (choice == 4)   // Exits the student menu.
            cout << "Exiting student menu...\n";
    // Makes sure the menu repeats as long as 4 is not entered.
    }while (choice != 4);
}

/**
 * This is the Professor menu
 */
void professorMenu(){
    Professor prof; // The professor object.
    int choice;

    do{
        cout << "\nProfessor Menu\n" <<
        "1. Assign grades to students\n" << 
        "2. View courses they teach\n" << 
        "3. Exit the professor menu\n" <<
        "Please enter your choice (1-3): ";

        cin >> choice;

        if (choice == 1){
            // Variables to assign grades to specific student.
            // May change later to decide between AVAILABLE students.
            Student student;
            string courseCode;  // 
            double grade;   // The grade to be assigned.
            prof.assignGrade(&student, courseCode, grade);
        }
        else if (choice == 2)   // Views the courses the professor is enrolled in.
            prof.viewCourses();
        else if (choice == 3)   // Exits the professor menu.
            cout << "Exiting Professor menu...\n";

    }while (choice != 3);
}

/**
 * The main menu of the program.
 * You can select teacher menu, professor menu, student menu, or exit.
 */
void mainMenu(){
    int choice;

    do{
        cout << "\nMain Menu\n"
        "1. Admin Menu\n" << 
        "2. Student Menu\n" << 
        "3. Professor Menu\n" <<
        "4. Exit\n" <<
        "Please enter your choice (1-4): ";

        cin >> choice;
        if (choice == 1)    // Select the admin menu.
            adminMenu();
        else if (choice == 2)   // Select the student menu.
            studentMenu();
        else if (choice == 3)   // Select the professor menu.
            professorMenu();
        else if (choice == 4)   // Exit the main menu.
            cout << "Exiting Main Menu...\n";
    }while (choice != 4);
}

int main(){
    // Title of the program.
    cout << "Welcome to the Student Management System\n";
    mainMenu();

    return 0;
}