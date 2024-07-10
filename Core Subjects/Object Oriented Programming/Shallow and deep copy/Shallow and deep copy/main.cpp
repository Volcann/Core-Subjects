#include <iostream>
using namespace std;

class A{
public:
    vector<string>(a);
    A(vector<string>(a))
    {
        this->a=a;
    }
};

int main() {
    A obj1({"hi","by"});
    
    //Deep
    A obj2 = obj1;
    obj2.a.push_back("WAIT");
    for(string data : obj1.a){
        cout<<data<<" ";
    }
    cout<<endl;
    
    //Shallow
    A* obj3 = &obj1;
    obj3->a.push_back("WAIT");
    for(string data : obj1.a){
        cout<<data<<" ";
    }
    cout<<endl;
    
    return 0;
}
