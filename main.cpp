#include <iostream>
#include "Node.hpp"

using namespace std;

int main() {
    Node n1 = Node(5);
    Node n2 = Node(6);
    n1.insertAfter(&n2);

    cout << n1.getData() << endl;
    cout << n1.getNext() << " : " << &n2 << " : " << n1.getTail() << endl;
    cout << n2.getPrev() << " : " << &n1 << " : " << n2.getHead() << endl;


    return 0;
}