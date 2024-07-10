#include <iostream>
using namespace std;
template <class data>
data square(data n){
    return n*n;
}
int main() {
    int num1 = 2;
    double num2 = 2.2;
    cout<<"Int : "<<square(num1)<<endl;
    cout<<"Double : "<<square(num2)<<endl;
    return 0;
}
