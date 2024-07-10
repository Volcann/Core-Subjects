#ifndef mergefunc_h
#define mergefunc_h
#include <iostream>
using namespace std;
void printarray();
void divide(int *arr,int start,int end);
void mergesort(int *arr, int start, int medium, int end);

void mergesort(int *arr, int start, int medium, int end){
    int size1 = medium - start + 1 ;//element zero when added it's considered 0 thus add one
    int size2 = end - medium ;
    int left[size1];
    int right[size2];
    
    //assign elements
    for(int i = 0 ; i < size1 ; i++){
        left[i]=arr[start+i];//arr elements from start to i that was above mentioned till medium
    }
    for(int j = 0 ; j < size2 ; j++){
        right[j]=arr[(medium+1)+j];//arr elements from medium+1 to j that was above mentioned till end
    }
    
    //sorting
    int i = 0 , j = 0 , k = start;//start as its was divided and start element is not zero all the time
    
    while (i<size1&&j<size2) {
        if(left[i] <= right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    
    //for left elements in array
    while(i<size1){
        arr[k]=left[i];
        i++;
        k++;
    }
    //conditionally
    while(j<size2){
        arr[k]=right[j];
        j++;
        k++;
    }
}

void divide(int *arr,int start,int end){
    if(start<end){
        int medium = (start + end)/2;
        divide(arr, start, medium);
        divide(arr, medium + 1, end);
        
        mergesort(arr,start,medium,end);
    }
}

void printarray(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

#endif /* mergefunc_h */
