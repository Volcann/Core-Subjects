#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> at = {10,20,30,40};
    vector<int> vt = {1,2,3,4};
    vector<int>::iterator i = vt.begin();
    
    copy(at.begin(), at.end(), inserter(vt, i));
    
    for(int i : vt ){
        cout<<i<<" ";
    }
    return 0;
}
