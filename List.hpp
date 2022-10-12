#ifndef LIST
#define LIST

#include <iostream>
#include <ostream>
#include "Node.hpp"

class List {
    private:
        Node* Head;

    public:
        List(Node* head);
        List(const int data);

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
                Iterator& operator--();
                bool operator==(Iterator other) const;
                bool operator!=(Iterator other) const;
                Node* operator*();
        };

        Iterator begin();
        Iterator start(Node* startNode);
        Iterator end();

        Node* getHead();
        Node* getTail();

        void push(Node* node);
};

std::ostream& operator<<(std::ostream &flux, Node const& node);

#endif

