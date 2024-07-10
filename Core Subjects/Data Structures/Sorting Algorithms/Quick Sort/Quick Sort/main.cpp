#include<iostream>
using namespace std;

// --- > Pivot ele is made arr[end] an end ele
// --- > and was compared by other ele thus swap
// --- > N log N

// --- > returing the position of pivot element
int partition(int *arr,int start,int end) {
    int pivot = arr[end];
    int i = (start - 1);
    for(int j = start ; j < end ; j++) {
        if(arr[j]<pivot) {
            i++;
            swap(arr[i] ,arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    return (i+1);
}

// ---> dividing
void divide(int *arr, int start, int end) {
    if(start<end) {
        int pivot_element = partition(arr,start,end);
        divide(arr,start, pivot_element-1);
        divide(arr,pivot_element+1,end);
    }
}

void printarr(int *arr,int n) {
    cout<<"Array Elements"<<endl;
    for(int i = 0 ; i < n ; i++) {
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}

int main()
{
    int a[] = {1,-4,6,17,-6,-9};
    int n = sizeof(a)/sizeof(a[0]);
    printarr(a,n);
    divide(a,0,n-1);
    printarr(a,n);
    return 0;
}
