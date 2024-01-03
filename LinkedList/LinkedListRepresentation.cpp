// Linked List 
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *pre;
};
void insertingAtTail(Node* &tail, int data) {
    Node *temp = new Node;
    temp->data = data;
    temp->next = tail->next;
    tail->next = temp;
    tail = temp;
}

void traversal(Node* head) {
    Node *temp = head;
    
    do {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    
}
void createLL(Node* &head, Node* &tail, int data) {
        //created new node
        Node *temp = new Node;
        temp->data = data;
        
        //for 1st node
        if(tail == NULL && head == NULL) {
            tail = temp;
            head = temp;
        }
        // new node point to head;
        temp->next = head;
        //head = new created node
        head = temp;

        // tail ka next pointing to new head;
        tail->next = head;
}

int main() {
    Node *head = NULL;
    Node *tail = NULL;

    createLL(head, tail, 5);
    createLL(head, tail, 6);

    cout << head << " = " << tail->next << endl;
    traversal(head);
    // int size;
    // cout << "Enter the number of node you want to create" << endl;
    // cin >> size;

    // for (int i = 0; i < size; i++) {
    //     cout << "Enter data for node " << i+1;
    //     int data;
    //     cin >> data;
    //     createLL(head, tail, data);
    // }
    // int data;
    // cout << "Before tail" << endl;
    
    // cout << tail->data << endl;
    // cout << "Enter data for adding at tail" << endl;
    // cin >> data;

    // insertingAtTail(tail, data);
    // cout << endl << "After tail" << endl;
    // cout << head->data << endl;
    // cout << tail->data << endl;
}