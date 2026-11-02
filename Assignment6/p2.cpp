#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *tail = NULL;
    int n, x;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;

        Node* temp = new Node;
        temp->data = x;
        temp->next = NULL;

        if (head == NULL) {
            head = tail = temp;
            tail->next = head;
        } else {
            tail->next = temp;
            tail = temp;
            tail->next = head;
        }
    }

    if (head != NULL) {
        Node* temp = head;

        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        cout << head->data;
    }

    return 0;
}
