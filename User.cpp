#include "User.h"

/**
 * This function will be overwritten by Student and Professor classes.
 */
void User::viewProfile() const{
    cout << "Name: " << name << endl;
}