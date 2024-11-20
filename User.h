#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;
class User{
    private:
        //string name;

    protected:
        string name;

    public:
        virtual void viewProfile() const;
};

#endif