#include <iostream>
#include <fstream>
using namespace::std;

int main() {
    fstream file;
    char data ,dataout;
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Binary Files/Binary Files/File.dat",ios::binary|ios::out);
    
    cout<<"Enter data to file : ";
    cin.get(data);
    file.write(&data,sizeof(data));
    file.close();
    file.open("/Users/volcann/Library/Mobile Documents/com~apple~CloudDocs/Binary Files/Binary Files/File.dat",ios::binary|ios::in);
    cout<<"Data entered to binary file"<<endl;
    file.read(&dataout,sizeof(dataout));
    cout<<dataout<<endl;
    file.close();
    return 0;
}
