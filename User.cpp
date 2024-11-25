/**
* The function that represents a user, whether professor, admin, or student.
* 
* @author    Shane T. Vest    
* @date      11/23/2024
*/
#include "User.h"

/**
 * This function will be overwritten by Student and Professor classes.
 */
void User::viewProfile() const{
    cout << "Name: " << name << endl;
}

// Marks work.
/*
void User::setName(string n){
    this->name = n;
}
*/

// Mark's work.
/*
string User::getName() const{
    return name;
}
*/
