#ifndef files_h
#define files_h
#include <iostream>
#include <fstream>
using namespace std;
long n;
void filewrite(){
    fstream file;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Random access file/Random access file/file.txt",ios::out|ios::in);
    file.seekp(-9,ios::end);
    n = file.tellp();
    file<<"HELLOW";
    cout<<"Current Position : "<<n<<endl;
    file.close();
}
void fileread(){
    fstream file;
    string data;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Random access file/Random access file/file.txt",ios::out|ios::in);
    file.seekg(2,ios::beg);
    n = file.tellg();
    while(file){
        getline(file,data);
        cout<<data;
    }
    cout<<endl;
    cout<<"Current Position : "<<n<<endl;
    file.close();
}
#endif /* files_h */
