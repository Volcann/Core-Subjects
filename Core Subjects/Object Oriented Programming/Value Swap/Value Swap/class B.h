#ifndef class_B_h
#define class_B_h
#include "class A.h"

class A;

class B{
    int b;
public:
    void setb(int b){
        this->b=b;
    }
    friend void swap(A,B);
    int getb(void){
        return b;
    }
};

#endif
