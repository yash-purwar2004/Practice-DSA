#include <iostream>
#include <queue>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node* buildtree() {
    cout << "Enter the data: ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    node* root = new node(data);

    cout << "Entering data for inserting in left: " << data << endl;
    root->left = buildtree();

    cout << "Entering data for inserting in right: " << data << endl;
    root->right = buildtree();

    return root;
}

void levelordertraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;

            if (!q.empty()) {
                q.push(NULL);
            }
        } 
        
        else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }

            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}


void inOrder(node* root){
    if(root == NULL){
        return;
    }
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(node* root){
    if(root == NULL){
        return;
    }
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node* root){
    if(root == NULL){
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


int main() {
    node* root = NULL;
    root = buildtree();

    levelordertraversal(root);
    
    cout<<"Inorder Traversal is"<<endl;
    inOrder(root);
    
    cout<<"Preorder Traversal is"<<endl;
    preOrder(root);
    
    cout<<"Postorder Traversal is"<<endl;
    postOrder(root);
    return 0;
}
