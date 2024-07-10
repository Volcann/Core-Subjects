#include <iostream>
#include "mergefunc.h"
using namespace std;

int main()
{
    int a[] = {1,-4,6,17,-6,-9};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<n;
    divide(a,0,n-1);
    printarray(a,n);
    return 0;
}
