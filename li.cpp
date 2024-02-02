#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node next;

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

        void deleteNode(int);

        void printList();
};

void Linkedlist::insertNode(int data) {
    
    Node *node = new Node(data);

    if(head == NULL) {
        head = node;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = node;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


}