#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node *child;
    
    node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> child = NULL;
    }
};

void insert(node **head, int data){
    node *newnode = new node(data);
    
    if(*head == NULL){
        newnode -> next = NULL;
        *head = newnode;
        return;
    }
    
    else {
        node *temp = *head;
        while (temp -> next) {
            temp = temp -> next;
        }
        temp -> next = newnode;
        newnode -> next = NULL;
        return;
    }
}

node* provide_LINKLIST(){
    node* list = NULL;
    
    int size  = 6;
    for (int i = 0; i < size ; i++) {
        insert(&list,i+1);
    }
    
    return list;
}

void print(node *head){
    
    while (head) {
        cout << head -> data << " --> ";
        head = head -> next;
    }
    cout << "NULL" << endl;
    
}

node* child_NODE(){
    node *list1 = provide_LINKLIST();
    node *list2 = provide_LINKLIST();
    node *list3 = provide_LINKLIST();
    
    cout << "List 1 : " << endl;
    print(list1);
    cout << "List 2 : " << endl;
    print(list2);
    cout << "List 3 : " << endl;
    print(list3);
    cout << endl; cout << endl; cout << endl;
    
    list1 -> child = list2;
    list1 -> next -> next -> next = list3;
    
    return list1;
}

node *findMiddle(node *head) {
    if(head == nullptr) return head;

    node *size = head;
    int count = 0;
    while (size) {
      count++;
      size = size->next;
    }
    count /= 2;
    count -= 1;
    node *temp = head;
    while(count){
        temp = temp -> next;
    }
    return temp;
}

node *flatenning_list(node *list){
    
    node *end = list;
    while (end -> next) {
        end = end -> next;
    }
    
    node *curr = list;
    while (curr != end) {
        if(curr -> child){
            end -> next = curr -> child;
            node *temp = curr -> child;
            
            while (temp -> next) {
                temp = temp -> next;
            }
            
            end = temp;
        }
        curr = curr -> next;
    }
    
    return list;
}

node* reverse(node *head){
    node *curr = head;
    node *next = NULL;
    node *prev = NULL;
    
    while (curr) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    
    head = prev;
    return head;
}

//node* removeKthNode(node* head, int K){
//    reverse(&head);
//    node *size = head;
//    int count = 1;
//    while(size -> next){
//        count++;
//        size = size -> next;
//    }
//
//    if(count == K){
//        node *temp = head;
//        while(temp -> next -> next){
//            temp = temp -> next;
//        }
//        temp -> next = NULL;
//        reverse(&head);
//        return head;
//    }
//    else{
//        node *temp = head;
//        K -= 2;
//        while(temp -> next){
//            if(K == 0) break;
//            K--;
//            temp = temp -> next;
//        }
//
//        if (temp) {
//            temp -> next = temp -> next -> next;
//            reverse(&head);
//            return head;
//        }
//        else {
//            reverse(&head);
//            return head;
//        }
//    }
//}

bool isPalindrome(node *head) {
   if(head -> next == NULL || head == NULL){
       return 1;
   }
   else{
       node *temp1 = head;
       node *temp2 = head;
       temp2 = reverse(temp2);

       while(temp1 && temp2){
           if(temp1 -> data != temp2 -> data) return 0;
           temp1 = temp1 -> next;
           temp2 = temp2 -> next;
       }
       cout << endl;
       return 1;
   }
}

void deleteNode(node * nnode) {
    if(nnode == nullptr || nnode -> next == nullptr) return;
    
    node* temp = nnode->next;
    nnode->data = temp->data;
    nnode->next = temp->next;
    delete temp;
}

node *removeNodes(node *head, int k) {
    node *result = NULL;
    node *temp = head;
    
    while (temp -> next) {
        if(temp -> data == k) continue;
        else insert(&result, temp -> data);
        temp = temp -> next;
    }
    
    return result;
}

int main() {
    node* list = provide_LINKLIST();

    return 0;
}
