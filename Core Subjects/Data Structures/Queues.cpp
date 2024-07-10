#include <iostream>
using namespace std;
#define MAXSIZE 10

class Queue1{
public:
    int front , rear;
    int queue[MAXSIZE];
    
    Queue1(){
        front = rear = -1;
    }
    
    int size(){
        return rear;
    }
    
    bool empty(){
        return (front == -1 && rear == -1);
    }
    
    void enque(int data){
        if(rear == MAXSIZE) return;
        rear = (rear + 1) % MAXSIZE;
        queue[rear] = data;
        if(front == -1) front = rear;
    }
    
    void deque(){
        if(front == rear){
            front = rear = -1;
            return;
        }
        front = (front + 1) % MAXSIZE;
    }
    
    int peek(){
        return queue[front];
    }
    
};

class node1{
public:
    int data;
    node1* next;
    node1(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};

class Queue2{
public:
    node1* front;
    node1* rear;
    
    Queue2(){
        front = rear = nullptr;
    }
    
    bool empty(){
        return (front == nullptr && rear == nullptr);
    }
    
    void enque(int data){
        node1* newnode = new node1(data);
        
        if(rear == nullptr){
            front = rear = newnode;
            newnode -> next = nullptr;
            return;
        }
        
        rear -> next = newnode;
        rear = newnode;
        return;
    }
    
    void deque(){
        node1* temp = front;
        front = front -> next;
        
        delete temp;
        return;
    }
    
    int peek(){
        return front -> data;
    }
};

class node{
public:
    int data ;
    node* next;
    node* prev;
    node(int data){
        this -> data = data;
        this -> next = nullptr;
        this -> prev = nullptr;
    }
};

class deque{
public:
    node* front;
    node* rear;
    size_t size;
    size_t max_size;
    
    deque(int max_size){
        this -> size = 1;
        this -> max_size = max_size;
        front = rear = nullptr;
    }
    
    bool empty(){
        return (size == 0);
    }
    
    void enqueueatfront(int data){
        node* newnode = new node(data);
        
        if(front == nullptr){
            front = rear = newnode;
            return;
        }
        else{
            if(!full()){
                newnode -> next = front;
                front -> prev = newnode;
                front = newnode;
                size++;
            }
        }
        return;
    }
    
    void enqueueatend(int data){
        node* newnode = new node(data);
        
        if(front == nullptr){
            front = rear = newnode;
            return;
        }
        else{
            if(!full()){
                newnode -> prev = rear;
                rear -> next = newnode;
                rear = newnode;
                size++;
            }
        }
        return;
    }
    
    void dequeueatfront(){
        if(empty()){
            return;
        }
        else{
            node* temp = front;
            front = front -> next;
            if(front) front -> prev = nullptr;
            delete temp;
            size--;
            return;
        }
    }
    
    void dequeueatend(){
        if(empty()){
            return;
        }
        else{
            node* temp = rear;
            rear = rear -> prev;
            if(rear) rear -> next = nullptr;
            delete temp;
            size--;
            return;
        }
    }
    
    int End(){
        if(!rear) return 0;
        return rear -> data;
    }
    
    size_t size_of_deque(){
        return size;
    }
    
    bool full(){
        return (size == max_size);
    }
    
    int Front(){
        if(!front) return 0;
        return front -> data;
    }
};

int main(int argc, const char * argv[]) {
    Queue2 q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    
    q.deque();
    q.deque();
    
    cout << "Element: " << q.front -> data << endl;
    cout << "Element: " << q.rear -> data << endl;
    return 0;
}
