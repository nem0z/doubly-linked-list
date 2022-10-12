#ifndef NODE
#define NODE

#include <iostream>
#include <ostream>

class Node {
    private:
        Node* Next;
        Node* Prev;
        int Data;

    public:
        Node(const int data);

        Node* getNext() const;
        Node* getPrev() const;
        int getData() const;

        void setNext(Node* const node);
        void setPrev(Node* const node);
        void setData(const int data);

        Node* getHead();
        Node* getTail();

        void insertAfter(Node* const node);
        void insertBefore(Node* const node);
};

std::ostream& operator<<(std::ostream &flux, Node const& node);

#endif

