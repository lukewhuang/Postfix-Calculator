// Write a program that evaluates an arithmetic expression in post-fix notation.
#include "stack.h" 
#include <cstring>
#include <iostream>

using namespace std;

int evaluate(string tzuyu);

int evaluate(string tzuyu){
    Stack s;

    for (int i=0; i<tzuyu.length(); i++){
        char input = tzuyu[i];
        if(input == ' '){
            continue;
        }
        else if (input == '+' || input == '/'){
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();

            if (input == '+'){
                s.push(operand1 + operand2);
            }
            else if (input == '-'){
                s.push(operand1 - operand2);
            }
            else if (input == '*'){
                s.push(operand1 * operand2);
            }
            else if (input == '/'){
                s.push(operand1 / operand2);
            }
        }
        else if(input >= '0' && input <= '9'){
            s.push(tzuyu[i] - '0');
        }
    }
    return s.top();

}

int main(){
    string exp = "";
    cout<< "Expression: ";
    getline(cin, exp);

    int result = evaluate(exp);
    cout << result << endl;
}