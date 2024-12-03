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

// Declare admin outside.
Admin admin;

/**
 * This is the menu for Admin.
 * Allows for admin's prompts.
 */
void adminMenu(){
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
        if (choice == 1)
            admin.addStudent(new Student);
        // Adds a professor to the system.
        else if (choice == 2)
            admin.addProfessor(new Professor);
        // Add a new course.
        else if (choice == 3)
            admin.addCourse(new Course);
        // Lists all students in system.
        else if (choice == 4)
            admin.listStudents();
        // Lists all professors in system.
        else if (choice == 5)
            admin.listProfessors();
        // Lists all courses in system.s
        else if (choice == 6)
            admin.listCourses();
        // Exits system.
        else if (choice == 7)
            cout << "Exiting Admin menu...\n";
        
    }while (choice != 7);
}

/**
 * This is the student menu
 */
void studentMenu(){
    //Student student;
    int choice;
    int studentChoice;

    // Lists the students, allows user to select a choice based on listing number.
    do{
        cout << "Students\n";
        admin.listStudents();
        cout << "Enter list number next to your student name: ";
        cin >> studentChoice;
    }while (studentChoice > admin.students.size());
    // Prints the student that was found. 
    cout << "Student found: " << admin.students[studentChoice - 1]->name << endl;

    // Prompts the main menu after finding the student.
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
            int courseChoice;
            // Prints courses listed inside of Admin's registry. 
            do{
                cout << "Courses\n";
                admin.listCourses();
                cout << "Enter list number of course: ";
                cin >> courseChoice;
            }while (courseChoice > admin.courses.size());
            admin.students[studentChoice -1]->enrollInCourse(admin.courses[courseChoice -1]);   // Adds course to student's enrolled list.
            admin.courses[courseChoice -1]->addStudent(admin.students[studentChoice -1]);       // Adds student to course's list of students.
        }
        else if (choice == 2)   // Lists all the courses the student's enrolled in.
            admin.students[studentChoice -1]->viewCourses();
        else if (choice == 3)
            admin.students[studentChoice -1]->viewGrades();// Views all the student's grades.
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
    int profChoice;
    // Allows professor to select their name. 
    do{
        cout << "Professors\n";
        admin.listProfessors();
        cout << "Which professor are you? (Select number): ";
        cin >> profChoice;
    }while (profChoice > admin.professors.size());
    // Assigns professor. 
    prof = *admin.professors[profChoice - 1];
    // Lists the professor's options. 
    do{
        cout << "\nProfessor Menu\n" <<
        "1. Assign grades to students\n" << 
        "2. View courses they teach\n" << 
        "3. Exit the professor menu\n" <<
        "Please enter your choice (1-3): ";

        cin >> choice;

        if (choice == 1){   // Assign grade to student.
            // Variables to assign grades to specific student.
            // May change later to decide between AVAILABLE students.
            Student student;
            string courseCode;
            double grade;   // The grade to be assigned.
            int courseChoice;
            int studentChoice;

            // Select one of the courses you teach!
            do{
                cout << "Courses you teach\n";
                prof.viewCourses();
                cout << "Enter list of course for grading: ";
                cin >> courseChoice;

            }while (courseChoice > prof.taughtCourses.size() || courseChoice < 0);   // Makes sure the courses stay in bounds.

            // Prints to verify the course you selected.
            cout << "Course ";
            prof.taughtCourses[courseChoice -1]->displayCourseDetails();
            cout << " selected.\n";
            courseCode = prof.taughtCourses[courseChoice -1]->courseCode;   // Gets the course code.

            // Select a student in the course you teach.
            do{
                cout << "Students in the course\n";
                // If there are no students enrolled in the course.
                if (prof.taughtCourses[courseChoice -1]->enrolledStudents.size() == 0){
                    cout << "No students in this class.\n";
                    break;
                }
                else{
                    for (int i = 0; i < prof.taughtCourses[courseChoice -1]->enrolledStudents.size(); i++){
                        cout << i + 1 << ". ";
                        prof.taughtCourses[courseChoice -1]->enrolledStudents[i]->viewProfile();
                    }
                    cout << "Select student (list number): ";
                    cin >> studentChoice;
                }
                
            }while (studentChoice > prof.taughtCourses[courseChoice -1]->enrolledStudents.size() || studentChoice < 0);
            // Adds student if there IS a student to select.
            if (prof.taughtCourses[courseChoice -1]->enrolledStudents.size() > 0){
                // May change later.
                student = *prof.taughtCourses[courseChoice -1]->enrolledStudents[studentChoice -1];

                // Now assign grade!
                cout << "Total information\n";
                prof.taughtCourses[courseChoice-1]->displayCourseDetails();
                student.viewProfile();
                cout << "Which grade do you want to assign for this student?: ";
                cin >> grade;

                prof.assignGrade(prof.taughtCourses[courseChoice -1]->enrolledStudents[studentChoice -1], courseCode, grade);
            }
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
        // Main menu.
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

/**
 * The main program that executes all the code. 
 */
int main(){
    // Title of the program.
    cout << "Welcome to the Student Management System\n";
    mainMenu();

    return 0;
}
