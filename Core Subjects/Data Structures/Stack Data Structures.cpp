#include <iostream>
#include <stack>
using namespace std;

//ARRAYS
//#define MAX 20
//class STACK{
//    int top;
//public:
//    int stack[MAX];
//    STACK(){
//        this -> top = -1;
//    }
//    void push(int x){
//        stack[++top] = x;
//        return;
//    }
//    void pop(int x){
//        x = stack[--top];
//        return;
//    }
//    int peek(){
//        int x = stack[top];
//        return x;
//    }
//};

// LINKLIST
class node{
public:
    int data;
    node *next;
    node(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};

class STACK{
    node *top;
public:
    void push(int data){
        node *newnode = new node(data);
        newnode -> next = top;
        top = newnode;
        return;
    }
    void pop(){
        node* temp = top;
        top = top -> next;
        delete temp;
        return;
    }
    int peek(){
        return top -> data;
    }
};

bool Balanced(string str) {
    stack<char> paranthesis1;
    stack<char> paranthesis2;
    stack<char> paranthesis3;
    int count1 = 0 , count2 = 0 , count3 = 0 ;

    for(int i = 0 ; i < str.size() ; i++){
        if(str[i] == '(' || str[i] == ')') paranthesis1.push(str[i]);
        else if(str[i] == '{' || str[i] == '}') paranthesis2.push(str[i]);
        else if(str[i] == '[' || str[i] == ']') paranthesis3.push(str[i]);
        else continue;
    }
    
    while (!paranthesis1.empty()) {
        paranthesis1.pop();
        count1++;
    }
    
    while (!paranthesis2.empty()) {
        paranthesis2.pop();
        count2++;
    }
    
    while (!paranthesis3.empty()) {
        paranthesis3.pop();
        count3++;
    }
    
    return ((count1%2 == 0)&&(count2%2 == 0)&&(count1%3 == 0)) ? 1 : 0;
}

string reverse(string str){
    string result;
    stack<char> strr;
    
    for(int i = 0 ; i < str.size() ; i++){
        strr.push(str[i]);
    }
    
    while (!strr.empty()) {
        result += strr.top();
        strr.pop();
    }
    return result;
}

int calculate(string str){
    stack<int> integers;
    int result = 0;
    
    for(int i = 0 ; i < str.size() ; i++){
        if(isdigit(str[i])) integers.push((str[i] - '0'));
        else{
            if(str[i] == '+'){
                while (!integers.empty()) {
                    result += integers.top();
                    integers.pop();
                }
            }
            else if(str[i] == '*'){
                while (!integers.empty()) {
                    result *= integers.top();
                    integers.pop();
                }
            }
            else if(str[i] == '-'){
                while (!integers.empty()) {
                    result -= integers.top();
                    integers.pop();
                }
            }
            else if(str[i] == '/'){
                while (!integers.empty()) {
                    result /= integers.top();
                    integers.pop();
                }
            }
        }
    }
    
    return result;
}

// --> test cases
//    (a+c*b)+(c)

bool findRedundantBrackets(string &str){
    stack<char> para_op;
    
    for(int i = 0 ; i < str.size() ; i++){
        int count = 0;
        if (str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*') para_op.push(str[i]);
        else {
            if(str[i] == ')'){
                while (para_op.top() != '(') {
                    if(para_op.top() == '+' || para_op.top() == '-' || para_op.top() == '/' || para_op.top() == '*') count++;
                    para_op.pop();
                }
                para_op.pop();
                if(count == 0) return 1;
            }
        }
    }
    
    return 0;
}

int main() {
   STACK s;
    s.push(11);
    s.push(13);
    s.push(1);
    
    s.pop();s.pop();
    cout << s.peek();
   return 0;
}
