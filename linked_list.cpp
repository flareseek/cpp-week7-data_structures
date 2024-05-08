#include "linked_list.h"
#include "node.h"
#include <iostream>

#define WRONG_INDEX "wrong index"

// TODO: LinkedList 클래스 구현 작성

LinkedList::LinkedList() {
    head_ = nullptr;
    size_ = 0;
}

LinkedList::~LinkedList() {
    while(head_ != nullptr) {
        Node* temp = head_;
        head_ = head_->next_;
        delete temp;
    }
}

void LinkedList::print() {
    Node* cur = head_;
    while(cur != nullptr) {
        std::cout << cur->value_ << " ";
        cur = cur->next_;
    }
}


void LinkedList::insert(int index, int value) {
    if (index < 0 || index > size_)
        throw WRONG_INDEX;
    
    Node* newNode = new Node(value);
    Node* prevNode = head_;

    while(--index > 0) 
        prevNode = prevNode->next_;
    
    if (prevNode == nullptr) {
        head_ = newNode;
    } else {
        newNode->next_ = prevNode->next_;
        prevNode->next_ = newNode;
    }

    size_ ++;
}

int LinkedList::get(int index) {
    if (index < 0 || index >= size_)
        throw WRONG_INDEX;

    Node* cur = head_;
    while(index-->0)
        cur = cur->next_;
    
    return cur->value_;
}

void LinkedList::remove(int index) {
    if (index < 0 || index >= size_)
        throw WRONG_INDEX;

    Node* prevNode = head_;

    while(--index > 0) 
        prevNode = prevNode->next_;
    
    if (prevNode->next_ == nullptr) {
        delete head_;
        head_ = nullptr;
    } else {
        Node* curNode = prevNode->next_;
        prevNode->next_ = curNode->next_;
        delete curNode;
    }
    size_ --;    
}