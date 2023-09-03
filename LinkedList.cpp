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



// At the any position insertion in Linked List and iterate over the linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    if(position == 1){
        insertAtHead(head, d);
        return;
    } 
     
    Node *temp = head;
    int cnt = 1;
    while(cnt< position-1){
        temp = temp -> next;
        cnt++;
    }
    
    
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }
    
    Node* node = new Node;
    node -> data = d;
    node->next = temp -> next;
    temp->next = node;
    
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
    Node* node2 = new Node;
    
    Node* head = node1;
    
    node1 -> data = 12;
    node1 ->next = node2;
    node2 ->data = 13;
    node2 ->next = NULL;
    
    insertAtPosition(head, 2, 22);
    print(head);
}