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
        class Iterator {
            private:
                Node* IterNode;

            public:
                using difference_type = Node;
                using value_type = Node;
                using pointer = const Node*;
                using reference = const Node&;
                using iterator_category = std::forward_iterator_tag;

                Iterator(Node* node);
                Node* getIterNode();
                Iterator& operator++();
                //Iterator operator++(int);
                bool operator==(Iterator other) const;
                bool operator!=(Iterator other) const;
                Node* operator*();
        };

        Node(const int data);

        Iterator begin();
        Iterator begin(Node &beginNode);
        Iterator end();

        Node* getNext() const;
        Node* getPrev() const;
        int getData() const;

        void setNext(Node* const node);
        void setPrev(Node* const node);
        void setData(const int data);

        Node* getHead() const;
        Node* getTail() const;

        void insertAfter(Node* const node);
        void insertBefore(Node* const node);
};

std::ostream& operator<<(std::ostream &flux, Node const& node);

#endif

