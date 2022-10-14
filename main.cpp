#include <iostream>
#include "List.hpp"

using namespace std;

int main() {
    Node n1 = Node(5);
    Node n2 = Node(6);
    Node n3 = Node(7);
    
    List list = List(&n1);
    list.push(&n2);
    list.push(&n3);

    for (List::Iterator iter = list.start(list.getTail()); iter != list.end(); --iter)
        cout << *(*iter) << endl;

    cout << list.getHead() << " : " <<list.getTail() << endl;

    return 0;
}