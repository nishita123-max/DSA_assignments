#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = nullptr;       
    }
};

void insertAtBegining(Node ** head , int data){
    Node *newNode = new Node(data);
    newNode->next = *head;
    *head = newNode;

    cout<<"Inserted "<<data<<" at the beginning of the list\n";
}

void inserAtEnd(Node ** head , int data){
    Node *newNode = new Node(data);

    if(*head==nullptr){
        *head = newNode;
        return;
    }
    Node *cur = *head;
    while(cur->next!=nullptr){
        cur = cur->next;     
    }
    cur->next = newNode;

    cout<<"Inserted "<<data<<" at the end of the list\n";
}


void InsetionAfter(Node ** head, int key , int data){
    Node *newNode = new Node(data);
    if(*head==nullptr){
        *head = newNode;
        return;
    }

    Node *cur = *head;
    while(cur!=nullptr && cur->data!=key){
        cur = cur->next;
    }

    if(cur==nullptr){
        cout<<"Key "<<key<<" not found in the list\n";
        return;
    }

    newNode->next = cur->next;
    cur->next = newNode;  
    cout<<"Inserted "<<data<<" after "<<key<<" in the list\n";
}

void InsertionBefore(Node ** head , int key , int data){
    Node *newNode = new Node(data);

    if(*head==nullptr){
        cout<<"List is empty , key "<<key<<" not found\n";
        return;
    }

    if((*head)->data==key){
        newNode->next = *head;
        *head = newNode;
        cout<<"Inserted "<<data<<" before "<<key<<" in the list\n";
        return;
    }
    Node *cur = *head;

    while(cur->next!=nullptr && cur->next->data!=key){
        cur = cur->next;
    }

    if (cur->next == nullptr) {
        cout << "Key " << key << " not found\n";
        return;
    }

    newNode->next = cur->next;
    cur->next = newNode;

    cout<<"Inserted "<<data<<" before "<<key<<" in the list\n";
}

void display(Node **head){
    Node *cur = *head;

    while(cur!=nullptr){
        cout<<cur->data<<"->";
        cur=cur->next;
    }
    cout<<"NULL\n";
}

void DeletionFromBegining(Node **head){
    if(*head==nullptr){
        cout<<"List is empty , nothing to delete\n";
        return;
    }

    Node *cur = *head;
    cur = cur->next;
    *head = cur;

    cout<<"Deleted from begining";
}

void DeleteFromEnd(Node ** head){
    if(*head==nullptr){
        cout<<"List is empty , nothing to delete\n";
        return;
    }

    Node *cur = *head;
    Node *prev = nullptr;

    while(cur->next!=nullptr){
        prev = cur;
        cur = cur->next;
    }
    prev->next = nullptr;

    cout<<"Deleted from end\n";
}

void DeleteNode(Node ** head , int key){
    if(*head==nullptr){
        cout<<"List is empty , nothing to delete\n";
        return;
    }

    Node *cur = *head;
    Node *prev = nullptr;
    while(cur!=nullptr && cur->data!=key){
        prev = cur;
        cur = cur->next;
    }

    if(cur->next==nullptr){
        cout << "Key " << key << " not found\n";
        return ;
    }

   if (prev == nullptr) {
        *head = cur->next;
    } else {
        prev->next = cur->next;
    }

}

void DisplayCnt(Node ** head , int key){
    if(*head==nullptr){
        cout<<"List is empty , key not found\n";
        return;
    }

    Node *cur = *head;

    int cnt = 0;

    while(cur!=nullptr && cur->data!=key){
        cnt++;
        cur = cur->next;
    }

    cout<<"Key "<<key<<" found at position "<<cnt+1<<"\n";
}
int main(){
    Node *head = nullptr;
    insertAtBegining(&head, 10);
    inserAtEnd(&head, 20);
    InsetionAfter(&head, 10, 12);
    InsertionBefore(&head, 20, 15);
    display(&head);
    DeletionFromBegining(&head);
    display(&head);
    DeleteFromEnd(&head);
    display(&head);
    DeleteNode(&head , 12);
    display(&head);
    DisplayCnt(&head , 15);

    return 0;
}
