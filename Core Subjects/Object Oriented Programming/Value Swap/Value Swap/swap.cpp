#include "class A.h"
#include "class B.h"
#include <iostream>

using namespace std;

void swap(A a1,B b1){
    int temp;
    temp=a1.a;
    a1.a=b1.b;
    b1.b=temp;
    cout<<"Value in A : "<<a1.a<<endl;
    cout<<"Value in B : "<<b1.b<<endl;
}
