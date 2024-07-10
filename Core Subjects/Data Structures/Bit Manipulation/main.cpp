#include <iostream>
using namespace std;

string decimal_to_binary(int n){
    string str;
    
    while ( n != 0) {
        bool i = n & 1;
        n /= 2;
        str += to_string(i);
    }
    
    return str;
}

int find_ith_bit(int binary_number,int bit){
    int n = binary_number << bit;
    return n;
}

int main() {
    int bit = 0 ;
    int binary_number = 61;
    cout << binary_number << endl;
    cout << decimal_to_binary(61) << endl;
    cout << find_ith_bit(binary_number,bit);
    return 0;
}
