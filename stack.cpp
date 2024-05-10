#include "stack.h"

// TODO: Stack 클래스 구현 작성
void Stack::push(int data) {
    LinkedList::insert(0, data);
}

int Stack::pop() {
    int value = peek();
    LinkedList::remove(0);
    return value;
}

int Stack::peek() {
    return LinkedList::get(0);
}

Stack& Stack::operator+=(int value) {
    push(value);
    return *this;
}
