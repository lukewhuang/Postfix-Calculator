#ifndef STACK_H
#define STACK_H

//array implementation of stack
#define MAX 1000

class Stack{
    public:
        Stack() {used = 0;}
        void push(int entry);
        void pop();
        int top();
        bool empty() {return (used == 0);}
        int size() {return used;}
    private:
        int data[MAX];
        int used;

};
 
#endif

