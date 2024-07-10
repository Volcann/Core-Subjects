#ifndef node_h
#define node_h
#include <iostream>
#include "menus.h"
#include "node class.h"
using namespace std;
void insertatany(node **head);
void numberofnodes(int);
void print(node *);

static int number_of_nodes = 0 ;
int option;

void searchelement(node *Node){
    int ele , check = 0 , position = 0;
    cout << "Enter element to search in list : ";
    cin >> ele;
    while(Node != NULL){
        if(Node -> data == ele){
            check = 1;
            break;
        }
        Node = Node -> next;
        position++;
    }
    if(check){
        cout << "Element is present in : " << position << " index _" << endl;
        return;
    }
    cout << "Element is NOT present in list " << endl;
    return;
}

void insertelements(node **head,int data){
    node *temp = *head;
    node *newnode = new node(data);
    if(*head == NULL){
        *head = newnode;
        return;
    }
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newnode;
    return;
}

void atstart(node **head,int data){
    node *newnode = new node(data);
    newnode -> next = *head;
    *head = newnode;
    return;
}

void atmiddle(node **head,int data){
    node *newnode = new node(data);
    node *temp = *head;
    int iteration = number_of_nodes / 2;
    while(iteration != 0){
        temp = temp -> next;
        iteration--;
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;
    return;
}

void reverse(node *head){
    node *cur_ele = head;
    node *next = NULL;
    node *previous = NULL;
    
    while (cur_ele != NULL) {
        next = cur_ele -> next;
        cur_ele -> next = previous;
        previous = cur_ele;
        cur_ele = next;
    }
    head = previous;
    print(head);
    return;
}

void othertask(node **head){
    node *temp = *head;
    operationmenu();
    cin >> option;
    if(option == 0){
        exittheprogram();
    }
    else if(option == 1){
        insertatany(&temp);
        return;
    }
    else if(option == 2){
        reverse(temp);
        return;
    }
    else if(option == 3){
        numberofnodes(number_of_nodes);
        return;
    }
    else if(option == 4){
        searchelement(temp);
        return;
    }
    else othertask(&temp);
}

void insertatanypos(node **head,int data,int pos){
    node *newnode = new node(data);
    node *temp = *head;
    if(pos == 0){
        newnode -> next = *head;
        *head = newnode;
    }
    while(pos != 0){
        if(temp -> next == NULL){
            cout << "Over flowed ***** >>>>"<<endl;
            cout << endl; cout << endl;
            cout << "Want to add at end ? please type 1 : ";
            cin >> option;
            if(option){
                insertelements(&temp,data);
                return;
            }
            cout << "EXIT no element will be added *** >> " << endl;
            return;
        }
        temp = temp -> next;
        pos--;
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;
    return;
}

void insertatany(node **head){
    node *temp = *head;
    int ele;
    cout << "Enter element : ";
    cin >> ele;
    insertmenu();
    cin >> option;
    if(option == 1){
        cout << "Inserting at START --> " << endl;
        atstart(&temp,ele);
        print(temp);
        return;
    }
    else if(option == 2){
        cout << "Inserting at MIDDLE --> " << endl;
        atmiddle(&temp,ele);
        print(temp);
        return;
    }
    else if(option == 3){
        cout << "Inserting at END --> " << endl;
        insertelements(&temp,ele);
        print(temp);
        return;
    }
    else if(option == 4){
        int pos;
        cout << "In which position you want to add this element : ";
        cin >> pos;
        pos -= 1;
        insertatanypos(&temp,ele,pos);
        print(temp);
        return;
    }
    else
        return;
}

void print(node *head){
    cout << endl; cout << endl;
    cout << "Data present in the list --" << endl;
    while(head != NULL){
        cout << head->data << " ---> ";
        head = head -> next;
    }
    if(head == NULL){
        cout << "NULL" << endl;
    }
    cout << endl; cout << endl;
    return;
}

void menu(){
    node *head = NULL;
    int iteration = 1;
    intro();
    cin >> option;
    while(option != 0){
        cout<<"Element number "<<iteration++<<" : ";
        int ele ;
        cin >> ele;
        insertelements(&head, ele);
        number_of_nodes++;
        option--;
    }
    print(head);
    othertask(&head);
    return;
}


#endif /* node_h */
