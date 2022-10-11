#include "Node.hpp"

// Constructor
Node::Node(int data) {
    Data = data;
    Next = nullptr;
    Prev = nullptr;
}

// Getter
Node* Node::getNext() const {
    return this->Next;
}

Node* Node::getPrev() const {
    return this->Prev;
}

int Node::getData() const {
    return this->Data;
}

//Setter
void Node::setNext(Node* const node) {
    this->Next = node;
}

void Node::setPrev(Node* const node) {
    this->Prev = node;
}

void Node::setData(const int data) {
    this->Data = data;
}

// Head and tail getters
Node* Node::getHead() const {
    Node* head = this->Prev;
    while(head != nullptr) {
        if(head->getPrev() == nullptr)
            return head;
        head = head->getPrev();
    }
    return nullptr;
}

Node* Node::getTail() const {
    Node* tail = this->Next;
    while(tail != nullptr) {
        if(tail->getNext() == nullptr)
            return tail;
        tail = tail->getNext();
    }
    return nullptr;
}

// Insert methods

void Node::insertAfter(Node* const node) {
    node->setNext(this->Next);
    node->setPrev(this);
    this->setNext(node);
}

void Node::insertBefore(Node* const node) {
    node->setPrev(this->Prev);
    node->setNext(this);
    this->setPrev(node);
}