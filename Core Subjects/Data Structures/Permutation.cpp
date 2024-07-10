#include<iostream>
#include<string>
#include<vector>
using namespace std;
//------------------------------------------------------
//                       A B C
//                  /------|------\
//          _______/       |       \____
//         /               |            \
//       ___              ___           ___
//        A                B             C
//        |                |              \
//        |                |               \
//       ___              ___              ___
//       B C              A C              A B
//     /     \          /     \          /     \
//    /       \        /       \        /       \
//  _____    _____   _____    _____   _____    _____
//  A B C    A C B   B A C    B C A   C A B    C B A
//------------------------------------------------------
void permutation(string str,int i,vector<string> &v)
{
    if(i==str.size()){
        cout<<"**********Returned : "<<str<<endl;
        cout<<endl;
        return;
    }
    for(int j = i ; j < str.size() ; j++ ){
        cout<<"J : "<<j<<" -> "<<str[j]<<endl;
        cout<<"I : "<<i<<" -> "<<str[i]<<endl;
        cout<<"Before swap :"<<str<<endl;
        cout<<endl;
        swap(str[j], str[i]);
        cout<<"J : "<<j<<" -> "<<str[j]<<endl;
        cout<<"I : "<<i<<" -> "<<str[i]<<endl;
        cout<<"After swap :"<<str<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        permutation(str, i+1, v);
    }
}

vector<string> findPermutations(string s) {
    vector<string> v;
    permutation(s,0,v);
    return v;
}

int main(){
    vector<string> str;
    str = findPermutations("ABC");
    for(auto i : str){
        cout << i <<endl;
    }
}
