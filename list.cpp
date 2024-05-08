#include "list.h"

// TODO: List 클래스 구현 작성

void List::insert(int index, int value) {
    LinkedList::insert(index, value);
}

int List::get(int index) {
    return LinkedList::get(index);
}

void List::remove(int index) {
    LinkedList::remove(index);
}