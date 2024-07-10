#include<iostream>
using namespace std;

int main()
{
    int first = 0, last = 4 , ele , pos , i = 0;
    int mid;
    int array[5] {1,2,3,4,6};//element strickly need to align assending or desending order

    cout<<"Array : "<<endl;
    for(int j:array) {
        cout<<j<<" ";
    }
    
    cout<<endl;
    cout<<"Enter element to search in Arrays"<<endl;
    cin>>ele;
    cout<<endl;
    
    while(true) {
        i++;
        mid=(first + last)/2;
        if(array[mid]==ele) {
            cout<<"Element Found !!"<<endl;
            pos=mid;
            cout<<"Its Position : "<<pos<<endl;
            break;
        }
        else if(array[mid]>ele){
        last = mid - 1;
        }
        else if(array[mid]<ele)
        first = mid + 1;
        if (i==5){
        cout<<"No element Found ! "<<endl;
        exit(0);
        }
    }

    return 0;
}
