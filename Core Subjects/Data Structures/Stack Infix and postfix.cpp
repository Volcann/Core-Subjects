#include <iostream>
#include <stack>
using namespace std;

int operator_presedence(char op){
    if(op == '*' || op == '/') return 2;
    else return 1;
}

string Postfix_to_Infix(string postfix){
    string infix = "";
    stack<char> operators;
    
    for(int i = 0 ; i < postfix.size() ; i++){
        if(isalpha(postfix[i])) infix += postfix[i];
        else if(postfix[i] == '(') operators.push(postfix[i]);
        else if(postfix[i] == ')'){
            while (!operators.empty() && operators.top() != '(') {
                cout << operators.top() << endl;
                infix += operators.top();
                operators.pop();
            }
            operators.pop();
        }
        else {
            while (!operators.empty() && operator_presedence(postfix[i]) <= operator_presedence(operators.top())) {
                cout << operators.top() << endl;
                infix += operators.top();
                operators.pop();
            }
            operators.push(postfix[i]);
        }
    }
    
    while (!operators.empty()) {
        cout << operators.top() << endl;
        infix += operators.top();
        operators.pop();
    }
    
    return infix;
}

int main() {
    string postfix = "A+B*C-D/E";
    string infix = Postfix_to_Infix(postfix);
    
    cout << "Postfix : " << postfix << endl;
    cout << "Infix : " << infix << endl;
    
    return 0;
}
