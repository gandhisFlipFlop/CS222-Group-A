Programming Problem: Student Management System (User Input Driven) Problem Description:
You are tasked with developing a Student Management System that allows users to interact with the system via a menu-driven interface. The system should allow the admin, professors, and students to perform a variety of operations such as adding students, enrolling students in courses, assigning grades, and displaying information about users and courses. The system will handle all operations in memory, meaning once the program terminates, all data is lost.

The system should allow for the following features:

Admin Features:

Add new students and professors.
Add new courses and assign professors to those courses.
List all students, professors, and courses in the system.
Student Features:

Enroll in courses.
View enrolled courses.
View grades for the courses they are enrolled in.
Professor Features:

Assign grades to students in their courses.
View all students enrolled in the courses they are teaching.
General Features:

Implement a menu-driven interface that accepts user input to perform operations.
Users (admin, professor, student) can choose from various operations through a menu system.
The system will be operated entirely through user input with cin and cout.
Use inheritance for user roles (admin, professor, and student) and utilize C++ STL containers like std::vector, std::map to manage users, courses, and grades.
Classes to Implement:
User Class (Base Class):

Attributes:
std::string name: The name of the user (either a student or professor).
Methods:
virtual void viewProfile() const: Display user profile information (overridden by subclasses like Student and Professor).
Student Class (Inherits from User):

Attributes:
std::vector<Course*> enrolledCourses: List of courses the student is enrolled in.
std::map<std::string, double> grades: Map of course codes to grades.
Methods:
void enrollInCourse(Course* course): Enroll the student in a course.
void viewCourses() const: View all courses the student is enrolled in.
void viewGrades() const: View grades for all enrolled courses.
void viewProfile() const override: Display the student’s profile.
Professor Class (Inherits from User):

Attributes:
std::vector<Course*> taughtCourses: List of courses the professor is teaching.
Methods:
void assignGrade(Student* student, std::string courseCode, double grade): Assign a grade to a student for a particular course.
void viewCourses() const: View all courses the professor is teaching.
void viewProfile() const override: Display the professor’s profile.
Admin Class (Inherits from User):

Attributes:
std::vector<Student*> students: List of all students.
std::vector<Professor*> professors: List of all professors.
std::vector<Course*> courses: List of all courses.
Methods:
void addStudent(Student* student): Add a student to the system.
void addProfessor(Professor* professor): Add a professor to the system.
void addCourse(Course* course): Add a course to the system.
void listStudents() const: List all students in the system.
void listProfessors() const: List all professors in the system.
void listCourses() const: List all courses in the system.
void viewProfile() const override: Display the admin’s profile.
Course Class:

Attributes:
std::string courseName: Name of the course.
std::string courseCode: Unique identifier for the course.
Professor* professor: Pointer to the professor teaching the course.
std::vector<Student*> enrolledStudents: List of students enrolled in the course.
Methods:
void addStudent(Student* student): Add a student to the course.
void assignProfessor(Professor* professor): Assign a professor to the course.
void displayCourseDetails() const: Display course details, including name, code, and professor.
Grade Class (Template Class):

Attributes:
T grade: The grade received by the student, which can be of any type (int, float, std::string).
std::string gradeType: The type of grade (e.g., "Final Exam", "Project").
Methods:
void displayGrade() const: Display the grade and its type.
User Input and Menu-Driven Interface
The system should interact with the user based on their input through a text-based menu. Here’s how the flow will work:

Main Menu: The program will display a main menu with different options based on the user type (admin, student, professor).

Example:

Welcome to the Student Management System
1. Admin Menu
2. Student Menu
3. Professor Menu
4. Exit
Please enter your choice (1-4):
Admin Menu:

Admin will be able to:
Add a student
Add a professor
Add a course
List all students
List all professors
List all courses
Exit the Admin menu
Example Input/Output:

Admin Menu
1. Add a student
2. Add a professor
3. Add a course
4. List all students
5. List all professors
6. List all courses
7. Exit
Please enter your choice (1-7):
Student Menu:

Students will be able to:
Enroll in a course
View enrolled courses
View grades
Exit the Student menu
Example Input/Output:

Student Menu
1. Enroll in a course
2. View enrolled courses
3. View grades
4. Exit
Please enter your choice (1-4):
Professor Menu:

Professors will be able to:
Assign grades to students
View courses they teach
Exit the Professor menu
Example Input/Output:

 

Professor Menu
1. Assign grade to a student
2. View courses taught
3. Exit
Please enter your choice (1-3):
Detailed Functionality:
Admin Operations:

Add a student, professor, or course by entering the necessary details (e.g., name, course code, etc.).
List all students, professors, and courses currently stored in the system.
Student Operations:

Enroll in a course by providing the course code.
View all courses the student is enrolled in.
View grades for each enrolled course.
Professor Operations:

Assign grades to students by specifying the course and student.
View a list of all courses the professor is teaching.
Example Interaction:
Welcome to the Student Management System
1. Admin Menu
2. Student Menu
3. Professor Menu
4. Exit
Please enter your choice (1-4): 1

Admin Menu
1. Add a student
2. Add a professor
3. Add a course
4. List all students
5. List all professors
6. List all courses
7. Exit
Please enter your choice (1-7): 1

Enter student name: Alice
Student Alice added successfully.

Admin Menu
1. Add a student
2. Add a professor
3. Add a course
4. List all students
5. List all professors
6. List all courses
7. Exit
Please enter your choice (1-7): 3

Enter course name: CS101
Enter course code: 101
Enter professor name: Dr. Smith
Course CS101 added successfully.

Admin Menu
1. Add a student
2. Add a professor
3. Add a course
4. List all students
5. List all professors
6. List all courses
7. Exit
Please enter your choice (1-7): 7
Exiting Admin menu...

 

Requirements:
The system should handle various user inputs such as adding students, professors, and courses, enrolling in courses, and assigning grades.
Use C++ inheritance for user roles (Admin, Professor, Student).
Use C++ Standard Template Library (STL) (std::vector, std::map, etc.) to manage collections of students, professors, and courses.
Ensure proper handling of dynamic user input and corresponding actions.
