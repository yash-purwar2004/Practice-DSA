// Create a node by using a singly linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

int main(){
    Node* node1 = new Node;
    node1->data = 30;
    node1 ->next = NULL;
    
    cout<<node1->data<<endl;
}

// At the head insertion in Linked List and iterate over the linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

    void insertAtHead(Node* &head){
        Node* temp = new Node;
        temp -> data = 29;
        temp -> next = head;
        head = temp;
    }
    
    void print(Node* &head){
        Node* temo = head; // alag se pointer bana lia
        while(temo!=NULL){
            cout<<temo -> data<<" ";
            temo = temo -> next;
        }
        cout<<endl;
    }

int main(){
    Node* node1 = new Node;
    node1->data = 30;
    node1 ->next = NULL;
    
    
    Node* head = node1;
    print(head);
    insertAtHead(head);
    print(head);
}



// At the Tail insertion in Linked List and iterate over the linked list
#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
};

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node;
    temp -> data = d;
    temp->next= NULL;
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
        Node* temo = head; // alag se pointer bana lia
        while(temo!=NULL){
            cout<<temo -> data<<" ";
            temo = temo -> next;
        }
        cout<<endl;
    }

int main(){
    Node* node1 = new Node;
    node1 -> data = 30;
    node1 -> next = NULL;
    
    Node* head = node1;
    Node* tail = node1;
    
    insertAtTail(tail, 32);
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 21);
    print(head);
}