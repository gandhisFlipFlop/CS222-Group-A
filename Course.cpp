#include "Course.h"
#include "Student.h"

void Course::addStudent(Student* student){
    enrolledStudents.push_back(student);
    //cout << "Student " << student->getName() << " added to course " << courseName << endl;
}
void Course::assignProfessor(Professor* professor){

}
void Course::displayCourseDetails() const{
    cout << courseName << " " << courseCode;
    /*
    std::string courseName;
    std::string courseCode;
    Professor* professor;
    std::vector<Student*> enrolledStudents;
    */

}