#include <iostream>
#include <fstream>
using namespace::std;
/*
 int main() {
 fstream file;
 char data;
 file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Files/Files/file.txt",ios::in|ios::out);
 while(file){
 file.get(data);
 cout<<data;
 }
 return 0;
 }
 */

 int main() {
 fstream inFile("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Files/Files/file.txt", ios::in); string item;
 inFile >> item;
 while (inFile)
 {
     cout << item ;
     inFile >> item;
 } inFile.close(); return 0;
 }
