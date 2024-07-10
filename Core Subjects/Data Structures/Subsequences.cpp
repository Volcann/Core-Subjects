#include<iostream>
using namespace std;

void subsequences(string str,string seq,int i) {
    if(i==str.size()) {
        cout<<seq<<endl;
        return ;
    }
    char ch = str[i];
    subsequences(str,ch + seq,i+1);
    subsequences(str,seq,i+1);
}

int main() {
    subsequences("abc","",0);
    return 0;
}
