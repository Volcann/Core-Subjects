//---------------------------------------------
// GIVEN : attributes
// Mobile keypad
//---------------------------------------------
// 0 -- > .
// 1 -- > abc
// 2 -- > def
// 3 -- > ghi
// 4 -- > jkl
// 5 -- > mno
// 6 -- > pqr
// 7 -- > stu
// 8 -- > vwx
// 9 -- > yz
//---------------------------------------------
// Problem :
// Print combinations : 23 -- > def -- ghi
//---------------------------------------------
// Combinations : dg dh di eg eh ei fg fh fi
//---------------------------------------------
// TIME COMPLEXITY OF O(N²)
//void printstr(string str) {
//    for(int i = 0 ; i < str.size() ; i++) {
//        cout<<str[i]<<endl;
//    }
//}
//
//void print(string str2,char ch,int m) {
//    if(m==str2.size()) return ;
//    string str = "";
//    str += ch;
//    str += str2[m];
//    cout<<str<<endl;
//    print(str2,ch,m+1);
//}
//
//void printcombination(string str1, string str2,int n) {
//    if(str1.size()==0&&str2.size()>0) {
//        printstr(str2);
//        return ;
//    }
//    if(str1.size()>0&&str2.size()==0) {
//        printstr(str1);
//        return ;
//    }
//    if(n==str1.size()) return ;
//    char ch = str1[n];
//    print(str2,ch,0);
//    printcombination(str1,str2,n+1);
//}
//---------------------------------------------
//  Subsequence
//void sub(int i,int n,string str,string subs){
//    if(i == n){
//        cout << subs << endl;
//        return;
//    }
//    sub(i+1, n, str, str[i]+subs);
//    sub(i+1, n, str, subs);
//}
//---------------------------------------------
/*
 #include<iostream>
 using namespace std;

 int multiplewithoutsign(int m,int n) {
     if(n==0) return 0;
     return m + multiplewithoutsign(m,n-1);
 }

 int main() {
     cout<<multiplewithoutsign(2,6);
     return 0;
 }
*/
//---------------------------------------------
/*
 #include<iostream>
 using namespace std;

 int power(int m,int n) {
     if(n==0) return 1;
     return m = m * power(m,n-1);
 }

 int main() {
     cout<<power(2,5);
     return 0;
 }
*/
//---------------------------------------------
/*
 #include<iostream>
 using namespace std;

 void reverse(string str, string str1,int n) {
     if(n==-1) {
         cout<<str1<<endl;
         return ;
     }
     str1+=str[n];
     reverse(str,str1,n-1);
 }

 int main() {
     reverse("12341","\0",5);
     return 0;
 }
*/
//---------------------------------------------
/*
 #include<iostream>
 using namespace std;

 void sumofarray(int *arr,int n,int sum) {
     if(n==-1) {
         cout<<"Sum is : "<<sum<<endl;
             return ;
     }
     sum+=arr[n];
     sumofarray(arr,n-1,sum);
 }

 int main() {
     int arr[] = {1,2,3} ;
     int n = sizeof(arr)/sizeof(arr[0]);
     int sum = 0;
     sumofarray(arr,n,sum);
     return 0;
 }
*/
//---------------------------------------------
/*
 #include<iostream>
 using namespace std;

 int factorial(int n) {
     if(n==0) return 1;
     return n * factorial(n-1);
 }

 int main() {
     cout<< factorial(5);
     return 0;
 }
*/
//---------------------------------------------
/*
 #include<iostream>
 using namespace std;

 int nthFibonacci(int n) {
     if(n==0) return 0;
     if(n==1) return 1;
     return nthFibonacci(n-1)+nthFibonacci(n-2);
 }

 int main() {
     cout<<nthFibonacci(1);
     return 0;
 }
*/
//---------------------------------------------
/*
 #include<iostream>
 using namespace std;

 bool check(string str1, string str2) {
     for(int i = 0 ; i<str1.size() ; i++) {
         if(str1[i]==str2[i]) continue;
         else
             return 0;
     }
     return 1;
 }

 void plaindrome(string str1,string str2,string str,int n) {
     if(n==-1) {
         bool n = check(str,str2);
         if(n) {
             cout<<"Yes Plaindrome"<<endl;
         }
         else
             cout<<"No Plaindrome"<<endl;
         return;
     }
     str+=str1[n];
     plaindrome(str1,str2,str,n-1);
 }


 int main() {
     string str;
     string str1 ;
     cout<<"Enter String : "<<endl;
     getline(cin,str1);
     string str2 = str1;
     int n = str1.size();
     plaindrome(str1,str2,str,n-1);
     return 0;
 }
*/
//---------------------------------------------
