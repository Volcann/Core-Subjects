#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node(){}
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void addATSTART(node *&head,int data){
    node *newnode = new node(data);
    if(head == NULL){
        head = newnode;
        head -> next = head;
        return;
    }
    else{
        node *temp = head;
        do {
            temp = temp -> next;
        } while (temp != head);
        
        temp -> next = newnode;
        newnode -> next = head;
        head = newnode;
        return;
    }
}

void addATEND(node *&head,int data){
    node *newnode = new node(data);
    
    if(head == NULL){
        head = newnode;
        head -> next = head;
        return;
    }
    else{
        node *temp = head;
        do {
            temp = temp -> next;
        } while (temp -> next != head);
        
        temp -> next = newnode;
        newnode -> next = head;
        return;
    }
}

void addATMIDDLE(node *&head,int data){
    node *newnode = new node(data);
    
    if(head == NULL){
        head = newnode;
        head -> next = head;
        return;
    }
    else{
        int i = 0;
        {
            node *temp = head;
            
            do {
                temp = temp -> next;
                i++;
            } while (temp!= head);
        }
        i /= 2;
        {
            node *temp = head;
            while (i){
                temp = temp -> next;
                i--;
            }
            node *n = new node();
            n = temp -> next;
            temp -> next = newnode;
            newnode -> next = n;
        }
        return;
    }
}

void removingATSTART(node *&head){
    
    node *temp = head;
    do {
        temp = temp -> next;
    } while (temp -> next != head);
    temp -> next = head -> next;
    head = temp -> next;
}

void removingATEND(node *&head){
    node *temp = head;
    do {
        temp = temp -> next;
    } while (temp -> next -> next != head);
    temp -> next = head;
}

void print(node *head){
    node *temp = head;
    do {
        cout << temp -> data << " ";
        temp = temp -> next;
    } while (temp != head);
    cout << " head " << endl;
}

int main() {
    node *head = NULL;
    
    addATSTART(head, 1);
    addATEND(head, 2);
    addATEND(head, 3);
    
    print(head);
    removingATSTART(head);
    print(head);
    
//    {
//        {
//            int i , j = 0;
//            cout << "How many nodes you want to add : ";
//            cin >> i;
//            while (i) {
//                int val , chk;
//                cout << "Enter value at : " << j++ << " : ";
//                cin >> val;
//                cout << "Enter 1 to add at start." << endl;
//                cout << "Enter 2 to add at end." << endl;
//                cout << "Enter 3 to add at middle." << endl;
//                cout << "Enter please : ";
//                cin >> chk;
//                if(chk == 1) addATSTART(head,val);
//                else if(chk == 2) addATEND(head,val);
//                else if(chk == 3) addATMIDDLE(head,val);
//                i--;
//                cout << endl;cout << endl;cout << endl;
//            }
//        }
//        print(head);
//
//        {
//            int i , j = 0;
//            cout << "How many nodes you want to add : ";
//            cin >> i;
//            while (i) {
//                int val , chk;
//                cout << "Enter value at : " << j++ << " : ";
//                cin >> val;
//                cout << "Enter 1 to add at start." << endl;
//                cout << "Enter 2 to add at end." << endl;
//                cout << "Enter 3 to add at middle." << endl;
//                cout << "Enter please : ";
//                cin >> chk;
//                if(chk == 1) addATSTART(head,val);
//                else if(chk == 2) addATEND(head,val);
//                else if(chk == 3) addATMIDDLE(head,val);
//                i--;
//                cout << endl;cout << endl;cout << endl;
//            }
//        }
//        print(head);
//    }
    
    removingATEND(head);
    print(head);
    return 0;
}
