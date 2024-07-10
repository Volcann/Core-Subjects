#include<iostream>
using namespace std;

void sort(int *arr,int i,int j,int n) {
    if(j==n) return;
    if(arr[i]>arr[j]) swap(arr[i],arr[j]);
    sort(arr,i,j+1,n);
}

void bubblesort(int *arr,int i,int n) {
    if(i==n) {
        for(int i = 0; i<n ; i++) cout << arr[i] << " ";
        cout << endl;
        return;
    }
    sort(arr,i,i+1,n);
    bubblesort(arr,i+1,n);
}

int main()
{
    int arr[] = {1,4,3,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted Array : "<<endl;
    for(int i = 0; i<n ; i++) cout << arr[i] << " ";
    cout << endl;
    cout << endl;
    cout << "Sorted Array : " << endl;
    bubblesort(arr,0,5);
    return 0;
}
