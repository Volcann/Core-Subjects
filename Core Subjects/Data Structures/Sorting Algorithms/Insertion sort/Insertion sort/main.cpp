#include<iostream>
using namespace std;

// --> Insertion sort
// --> Make key element
// --> compare it in next while loops and sort

void insertionSort(int *arr,int n) {
    int i, j, key ;
    for(i = 1 ; i < n ; i++) {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {1,5,6,2,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr,n);

    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
