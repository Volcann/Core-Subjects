#ifndef menus_h
#define menus_h
#include <iostream>
using namespace std;

void intro(){
    cout << "----------------------------------"<<endl;
    cout << "------ Linked list program ------"<<endl;
    cout << "----------------------------------"<<endl;
    cout << "Enter how many element in list you want to enter : ";
}

void operationmenu(){
    cout << "Enter 0 to EXIT " << endl;
    cout << "Enter 1 to add more elements " << endl;
    cout << "Enter 2 to REVERSE elements and print them " << endl;
    cout << "Enter 3 to CHECK how many nodes present in linked list " << endl;
    cout << "Enter 4 to SEARCH element present in linked list " << endl;
    cout << endl; cout << endl;
    cout << "Enter : ";
}

void insertmenu(){
    cout << "Enter 1 to add elements at START " << endl;
    cout << "Enter 2 to add elements at MIDDLE " << endl;
    cout << "Enter 3 to add elements at END " << endl;
    cout << "Enter 4 to add elements at ANY position " << endl;
    cout << endl; cout << endl;
    cout << "Enter : ";
}

void exittheprogram(){
    cout << endl; cout << endl; cout << endl; cout << endl;
    cout << "*********** Exit the program **************" << endl;
    exit(0);
}

void numberofnodes(int nodes){
    cout << "Number of nodes in the linked list are : " << nodes << endl;
    cout << endl; cout << endl;
    return;
}

#endif /* menus_h */
