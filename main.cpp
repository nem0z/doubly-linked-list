#include <iostream>
#include "Node.hpp"

using namespace std;

int main() {
    Node n1 = Node(5);
    Node n2 = Node(6);
    Node n3 = Node(7);
    n1.insertAfter(&n2);
    n2.insertAfter(&n3);

    // cout << n1.getData() << endl;
    // cout << n1.getNext() << " : " << &n2 << " : " << n1.getTail() << endl;
    // cout << n2.getPrev() << " : " << &n1 << " : " << n2.getHead() << endl;

    for (Node::Iterator iter = n2.begin(n2); iter != n2.end(); ++iter)
        cout << *iter.getIterNode() << endl;

    return 0;
}