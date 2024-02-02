#include<bits/stdc++.h>

using namespace std;

class Node {
    
    public:
        int data;
        Node* next;

        Node() {
            data = 0;
            next = NULL;
        }

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }

};

class Linkedlist {
    Node* head;

    public:
        Linkedlist() {
            head = NULL;
        }

        void insertNode(int);

        void printList();

        void deleteNode(int);
};

void Linkedlist::deleteNode(int nodeOffset) {
    Node *temp = head , *temp2 = NULL;

    if(head == NULL) {
        cout << "List is empty\n";
        return;
    }
    int l = 0;
    while(temp != NULL) {
        temp = temp->next;
        l++;
    }

    if(l < nodeOffset) {
        cout << "Index out of range\n";
        return;
    }
    if(nodeOffset == 1) {
        head = head->next;
        delete temp;
        return;
    }

    while(nodeOffset > 1) {
        temp2 = temp;
        temp = temp->next;
        nodeOffset -= 1;
    }

    temp2->next = temp->next;

    delete temp;
}

void Linkedlist::insertNode(int data) {
    Node* newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void Linkedlist::printList() {
    Node *temp = head;
    if(head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    Linkedlist list;
    list.insertNode(10);
    list.insertNode(20);
    list.insertNode(30);
    list.insertNode(40);
    list.printList();
    cout << endl;
}