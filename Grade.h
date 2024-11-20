#ifndef GRADE_H
#define GRADE_H

#include <iostream>
using namespace std;

template<typename T>
class Grade{
    private:
        T grade;
        string gradeType;
    public:
        void displayGrade() const;

};

#endif