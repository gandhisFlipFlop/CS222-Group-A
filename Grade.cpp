/**
 * Represents a grade for a single assignment, class method definition.
 * 
 * @author  Shane T. Vest
 * @date    12/16/2024
 */
#include "Grade.h"

/**
 * Displays the grade the student has on a particular assignment.
 * 
 */
template<typename T>
void Grade<T>::displayGrade() const{
    cout << " Grade type: " << gradeType << " Grade: " << grade << endl;
}

/**
 * This is meant specifically to handle doubles, linking issues without this class!
 */
template<>
void Grade<double>::displayGrade() const{
    cout << " Grade type: " << gradeType << " Grade: " << grade  << "%"<< endl;
}