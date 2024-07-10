#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace::std;

int main() {
    int flag=0;
    string filename,data,dataread,datareadf2;
    fstream file1 , file2;
    cout<<"Enter file name to open file : ";
    while(true){
        getline(cin,filename);
        if(filename=="file1"){
            break;
        }
        else{
            cout<<"WRONG FILE NAME..."<<endl;
        }
    }
    if(filename=="file1"){
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Files data transfer/Files data transfer/file1.txt");
        cout<<"Enter Content to write in file : "<<endl;
        getline(cin,data);
        file1<<data;
        file1.close();
        cout<<"Data is written to file !!"<<endl;
    }
    cout<<"Enter 1 to add file1 content to file2 and also upper'\'case all letters : ";
    while(true){
        cin>>flag;
        if(flag==1){
            break;
        }
        else{
            cout<<"WRONG COMMAND..."<<endl;
        }
    }
    if(flag==1){
        file1.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Files data transfer/Files data transfer/file1.txt");
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Files data transfer/Files data transfer/file2.txt");
        while(file1){
            getline(file1,dataread);
        }
        file1.close();
        transform(dataread.begin(), dataread.end(),dataread.begin(),::toupper);
        file2<<dataread;
        file2.close();
        cout<<"Data at file 2 : "<<endl;
        file2.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Files data transfer/Files data transfer/file2.txt");
        while(file2){
            getline(file2,datareadf2);
        }
        cout<<datareadf2;
        file2.close();
    }
    return 0;
}
