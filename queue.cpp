#include "queue.h"

// TODO: Queue 클래스 구현 작성

void Queue::push(int data) {
    LinkedList::insert(LinkedList::size_, data);
}

int Queue::pop() {
    int value = peek();
    LinkedList::remove(0);
    return value;
}

int Queue::peek() {
    return LinkedList::get(0);
}

Queue& Queue::operator+=(int data) {
    push(data);
    return *this;
}