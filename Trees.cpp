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







// Pre Order Traversal using Stack
#include<iostream>
#include<stack>
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

void PreOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    
    stack<Node*>s;
    s.push(root);
    
    while(s.empty() == false){
        Node* temp = s.top();
        cout<<temp->data<<" ";
        s.pop();
        
        if (temp->right != NULL){
            s.push(temp->right);
        }
 
        // Enqueue right child
        if (temp->left != NULL){
            s.push(temp->left);
        }
    }
}

int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(7);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->left->right->left = newNode(5);
    root->left->right->right = newNode(6);
    
    cout << "Pre Order traversal of binary tree is \n";
    PreOrderTraversal(root);
}









// In Order Traversal Using Stack
#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};


void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    
    stack<Node*>s;
    Node* temp = root;
    
    while(temp != NULL || s.empty() == false){
        while (temp != NULL) {
            s.push(temp);
            temp = temp->left;
        }
        
        temp = s.top();
        s.pop();
        cout<<temp->data<<" ";
        
        temp = temp->right;
    }
    
}


Node* newNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}


int main(){
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);
    root->left->right->right = newNode(7);
    
    cout << "In Order traversal of binary tree is \n";
    inOrderTraversal(root);
    return 0;
}