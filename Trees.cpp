// Level Order Traversal using Queue
#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
};

Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}


void printLevelOrder(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*>q;
    q.push(root);

    while(q.empty() == false){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if (temp->left != NULL){
            q.push(temp->left);
        }
 
        // Enqueue right child
        if (temp->right != NULL){
            q.push(temp->right);
        }
    }
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    cout << "Level Order traversal of binary tree is \n";
    printLevelOrder(root);
    return 0;
}