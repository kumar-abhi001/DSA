#include<iostream>
using namespace std;

//Binary Tree node

class Node {
    public:
        int data;
        Node *left;
        Node *right;

        Node(int data) {
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

//Creating binary tree recursively

Node* createBT(Node* root) {
    cout << "Enter data:" << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if(data == -1)
        return NULL;

    cout << "Enter data for left of " << data << endl;
    root->left = createBT(root->left);

    cout << "Enter data right of " << data << endl;
    root->right = createBT(root->right);

    return root;
}
int main() {

    Node *root = NULL;
   root =  createBT(root);
    return 0;
}