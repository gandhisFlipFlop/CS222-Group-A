/**
 * Represents a grade for a single assignment, class method declaration.
 * 
 * @author  Shane T. Vest
 * @date    12/16/2024
 */
#ifndef GRADE_H
#define GRADE_H

#include <iostream>
using namespace std;

template<typename T>
class Grade{
    public:
        T grade;            // The grade number.
        string gradeType;   // The assignment that is being graded.
    public:
        /**
         * Prints the grade.
         */
        void displayGrade() const;

};

/**
 * This is here so the code can be linked properly!
 */
template<>
void Grade<double>::displayGrade() const;

#endif