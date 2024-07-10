#include<iostream>
using namespace std;

int main()
{
    int ele, i = 0;
    int array[5] {1,2,3,4,5};
    cout<<"Array : "<<endl;
    for(int j:array) {
        cout<<j<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Search Element in Arrays"<<endl;
    cin>>ele;
    cout<<endl;
    while(i<5) {
        i++;
        if(array[i]==ele) {
            break;
        }
        if(i==5){
        cout<<"No element found"<<endl;
        exit(0);
        }
    }
    if(array[i]==ele) {
        cout<<"Position of element in array : "<<i<<endl;
    }
    cout<<endl;
    return 0;
}
