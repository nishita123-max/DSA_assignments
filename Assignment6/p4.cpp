#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int sizeDLL(Node* head) {
    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int sizeCLL(Node* head) {
    if (head == NULL) return 0;

    int count = 0;
    Node* temp = head;

    do {
        count++;
        temp = temp->next;
    } while (temp != head);

    return count;
}

int main() {
    Node *head = NULL, *tail = NULL;
    int n, x;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        Node* newNode = new Node;
        newNode->data = x;
        newNode->prev = tail;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
            tail->next = newNode;

        tail = newNode;
    }

    cout << "Size of Doubly Linked List: "
         << sizeDLL(head) << endl;

    if (tail != NULL)
        tail->next = head;

    cout << "Size of Circular Linked List: "
         << sizeCLL(head) << endl;

    return 0;
}
