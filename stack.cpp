#include "stack.h"

// TODO: Stack 클래스 구현 작성
void Stack::push(int data) {
    LinkedList::insert(LinkedList::size_, data);
}

int Stack::pop() {
    int value = peek();
    LinkedList::remove(LinkedList::size_-1);
    return value;
}

int Stack::peek() {
    return LinkedList::get(LinkedList::size_-1);
}

Stack& Stack::operator+=(int value) {
    push(value);
    return *this;
}