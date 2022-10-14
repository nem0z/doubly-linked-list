#include "List.hpp"

// Constructors

List::List(Node* head) {
    Head = head;
}

List::List(const int data) {
    Head = new Node(data);
}

// Setter and getter

Node* List::getHead() {
    return this->Head;
}

Node* List::getTail() {
    List::Iterator tmp = this->end();
    for (List::Iterator iter = this->begin(); iter != this->end(); ++iter) {
        tmp = iter;
    }
    return *tmp;
}

// Methods

void List::push(Node* node) {
    this->Head->getTail()->insertAfter(node);
}

// Iterator

List::Iterator List::begin() {
    return List::Iterator(this->Head);
}

List::Iterator List::start(Node* startNode) {
    return List::Iterator(startNode);
}

List::Iterator List::end() {
    return List::Iterator(nullptr);
}

List::Iterator::Iterator(Node* node) {
    IterNode = node;
}

Node* List::Iterator::getIterNode() {
    return this->IterNode;
}

List::Iterator& List::Iterator::operator++() {
    this->IterNode = this->IterNode->getNext();
    return *this;
}

List::Iterator& List::Iterator::operator--() {
    this->IterNode = this->IterNode->getPrev();
    return *this;
}

bool List::Iterator::operator==(List::Iterator other) const {
    return this->IterNode == other.getIterNode();
}

bool List::Iterator::operator!=(List::Iterator other) const {
    return !(*this == other);
}

Node* List::Iterator::operator*() {
    return this->IterNode;
}
