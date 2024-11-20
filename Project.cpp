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
            Student *student = new Student();
            admin.addStudent(student);
        }
        // Adds a professor to the system.
        else if (choice == 2){
            Professor *prof = new Professor();
            admin.addProfessor(prof);

        }
        // Add a new course.
        else if (choice == 3){
            Course *newCourse = new Course();
            admin.addCourse(newCourse);
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

        if (choice == 1){
            //student.enrollInCourse();
        }
        else if (choice == 2)
            student.viewCourses();
        else if (choice == 3)
            student.viewGrades();

    }while (choice != 4);
}

/**
 * This is the Professor menu
 */
void professorMenu(){
    Professor prof;
    int choice;

    do{
        cout << "\nProfessor Menu\n" <<
        "1. Assign grades to students\n" << 
        "2. View courses they teach\n" << 
        "3. Exit the professor menu\n" <<
        "Please enter your choice (1-3): ";

        cin >> choice;

        if (choice == 1){
            //prof.assignGrade(Student* student, string courseCode, double grade);
        }
        else if (choice == 2)
            prof.viewCourses();
        else if (choice == 3)
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
        if (choice == 1)
            adminMenu();
        else if (choice == 2)
            studentMenu();
        else if (choice == 3)
            professorMenu();
        else if (choice == 4)
            cout << "Exiting Main Menu...\n";
    }while (choice != 4);
}

int main(){
    cout << "Welcome to the Student Management System\n";
    mainMenu();

    return 0;
}