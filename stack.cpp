#include "stack.h"
#include <cassert>


void Stack::push(int entry){
    assert(size() < MAX);
    data[used++] = entry;
}

void Stack::pop(){
    assert(!empty());
        used--;
}

int Stack::top(){
    assert(!empty());
    return data[used-1];
}