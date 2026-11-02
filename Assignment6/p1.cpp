#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;
    Node(int x) {
        data = x;
        prev = next = NULL;
    }
};

class LinkedList {
    Node* head;
    bool circular;

public:
    LinkedList(bool c) {
        head = NULL;
        circular = c;
    }

    void insertFirst(int x) {
        Node* n = new Node(x);

        if (!head) {
            head = n;
            if (circular) n->next = head;
            return;
        }

        if (circular) {
            Node* t = head;
            while (t->next != head) t = t->next;
            n->next = head;
            t->next = n;
            head = n;
        } else {
            n->next = head;
            head->prev = n;
            head = n;
        }
    }

    void insertLast(int x) {
        if (!head) {
            insertFirst(x);
            return;
        }

        Node* n = new Node(x);
        Node* t = head;

        if (circular) {
            while (t->next != head) t = t->next;
            t->next = n;
            n->next = head;
        } else {
            while (t->next) t = t->next;
            t->next = n;
            n->prev = t;
        }
    }

    void insertAfter(int key, int x) {
        if (!head) return;

        Node* t = head;
        do {
            if (t->data == key) {
                Node* n = new Node(x);
                n->next = t->next;
                t->next = n;
                n->prev = t;

                if (n->next) n->next->prev = n;
                return;
            }
            t = t->next;
        } while (t && (!circular || t != head));
    }

    void insertBefore(int key, int x) {
        if (!head) return;

        if (head->data == key) {
            insertFirst(x);
            return;
        }

        Node* t = head;
        do {
            if (t->next && t->next->data == key) {
                Node* n = new Node(x);
                n->next = t->next;
                t->next->prev = n;
                t->next = n;
                n->prev = t;
                return;
            }
            t = t->next;
        } while (t && (!circular || t != head));
    }

    void deleteNode(int x) {
        if (!head) return;

        Node* t = head;
        do {
            if (t->data == x) {
                if (t == head) {
                    if (t->next == head || !t->next) {
                        head = NULL;
                    } else {
                        Node* last = head;
                        while (circular && last->next != head)
                            last = last->next;

                        head = head->next;

                        if (circular) last->next = head;
                        else head->prev = NULL;
                    }
                } else {
                    t->prev->next = t->next;
                    if (t->next) t->next->prev = t->prev;
                }

                delete t;
                return;
            }
            t = t->next;
        } while (t && (!circular || t != head));
    }

    void search(int x) {
        Node* t = head;
        int pos = 1;

        if (!head) {
            cout << "List is empty\n";
            return;
        }

        do {
            if (t->data == x) {
                cout << "Found at position " << pos << endl;
                return;
            }
            t = t->next;
            pos++;
        } while (t && (!circular || t != head));

        cout << "Not Found\n";
    }

    void display() {
        if (!head) {
            cout << "List is empty\n";
            return;
        }

        Node* t = head;
        do {
            cout << t->data << " ";
            t = t->next;
        } while (t && (!circular || t != head));

        cout << endl;
    }
};

int main() {
    LinkedList dll(false), cll(true);
    int type, choice, x, key;

    do {
        cout << "\n1. Doubly Linked List";
        cout << "\n2. Circular Linked List";
        cout << "\n3. Exit\n";
        cin >> type;

        if (type == 3) break;

        LinkedList* list = (type == 1) ? &dll : &cll;

        do {
            cout << "\n1. Insert First";
            cout << "\n2. Insert Last";
            cout << "\n3. Insert After";
            cout << "\n4. Insert Before";
            cout << "\n5. Delete Node";
            cout << "\n6. Search";
            cout << "\n7. Display";
            cout << "\n8. Back\n";
            cin >> choice;

            switch (choice) {
                case 1:
                    cin >> x;
                    list->insertFirst(x);
                    break;

                case 2:
                    cin >> x;
                    list->insertLast(x);
                    break;

                case 3:
                    cin >> key >> x;
                    list->insertAfter(key, x);
                    break;

                case 4:
                    cin >> key >> x;
                    list->insertBefore(key, x);
                    break;

                case 5:
                    cin >> x;
                    list->deleteNode(x);
                    break;

                case 6:
                    cin >> x;
                    list->search(x);
                    break;

                case 7:
                    list->display();
                    break;
            }
        } while (choice != 8);

    } while (type != 3);

    return 0;
}
