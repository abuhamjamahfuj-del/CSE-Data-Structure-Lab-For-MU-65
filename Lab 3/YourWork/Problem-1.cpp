#include <iostream>
using namespace std;

struct node {
    int val;
    node *next;
};
struct SinglyLinkedList {
    node *head, *tail;

    SinglyLinkedList() {
        head = NULL;
        tail = NULL;
        cout << "A SinglyLinkedList Start!\n";
    }   
};
int main() {
    SinglyLinkedList s1;
    return 0;
}