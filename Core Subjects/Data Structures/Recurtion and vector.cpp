/*
#include<iostream>
using namespace std;

void traverse(int *arr,int n) {
    if(n==4) return;
    cout<<arr[n]<<endl;
    traverse(arr,n+1);
}

int main() {
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    traverse(arr,0);
    return 0;
}
*/
/*
 #include<iostream>
 using namespace std;

 void traverse(int *arr,int i,int n) {
     if(i==n) return;
     cout<<*arr<<endl;
     traverse(arr+1,i+1,n);
 }

 int main() {
     int arr[] = {1,2,3,4};
     int n = sizeof(arr)/sizeof(arr[0]);
     traverse(arr,0,n);
     return 0;
 }
*/
#include<iostream>
using namespace std;

string removeDuplicate(string str,int i,int n) {
    if(i==n) return str;
    if(str[i]==str[i+1]) str[i]='\0';
    return str = removeDuplicate(str,i+1,n);
}

int main() {
    string str = "aabbbbaaacckkggsgjjgssc";
    string result = removeDuplicate(str,0,str.size());
    cout << "Real String : "  << str << endl;
    cout << "Ater removing duplicates String : " << result << endl;
}
