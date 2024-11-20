#include "Grade.h"

/**
 * Displays the grade the student has on a particular assignment.
 * 
 */
template<typename T>
void Grade<T>::displayGrade() const{
    cout << grade << " " << gradeType << endl;
}