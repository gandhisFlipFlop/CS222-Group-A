#ifndef USER_H
#define USER_H

/**
 * Base user class, inherited by Student, Professor, and Admin.
 */
#include <iostream>
using namespace std;
class User{
    protected:
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