#ifndef USER_H
#define USER_H

/**
 * Base user class, inherited by Student, Professor, and Admin.
 * 
 * @author  Shane T. Vest
 * @date    11/21/2024
 */
#include <iostream>
using namespace std;
class User{
    public:
        // The name of the person this class is for.
        // Whether or not it's declared private, public, or protected has not been decided yet.
        string name;

    public:
        /**
         * Allows the user to view its profile information, such as name!
         */
        virtual void viewProfile() const;
};

#endif
