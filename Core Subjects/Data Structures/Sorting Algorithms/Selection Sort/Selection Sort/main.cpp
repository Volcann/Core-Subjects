/*
void selectionsort(int *arr,int n){
    int min;
    for(int i = 0 ; i < n ; i ++){
        min = i;
        for(int j = i+1 ; j < n ; j ++){
            if(arr[j]<arr[min]) min = j;
        }
        swap(arr[i], arr[min]);
    }
}
*/
// ---> min index is searched and later on it was swaped
// ---> Nested for loop O n * n
#include<iostream>
using namespace std;

void checkminindex(int *arr,int &min,int i,int n) {
    if(i==n) return ;
    if(arr[i]<arr[min]) min = i;
    checkminindex(arr,min,i+1,n);
}

void selectionSort(int *arr,int i,int n) {
    if(i==n) return ;
    int min = i;
    checkminindex(arr,min,i+1,n);
    swap(arr[i],arr[min]);
    selectionSort(arr,i+1,n);
}

int main() {
    int arr[] = {1,5,6,2,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr,0,n);

    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
