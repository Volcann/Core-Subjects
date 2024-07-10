#include <iostream>
#include "class A.h"
using namespace std;

int main()
{
    int a , b;
    A ac;
    B bc;
    cout<<"Enter Value in Class A\n";
    cin>>a;
    ac.seta(a);
    cout<<"Enter Value in Class B\n";
    cin>>b;
    bc.setb(b);
    cout<<"Value in A : "<<ac.geta()<<endl;
    cout<<"Value in B : "<<bc.getb()<<endl;
    swap(ac,bc);
    return 0;
}
