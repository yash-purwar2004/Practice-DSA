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




// Code for deleting the first or last or any node in linked list
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
    
void deleteNode(int position, Node* &head, Node* &tail){
    // deleting first or starting Node
    if(position==1){
        Node*temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        
        int cnt=1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete(curr);
        
         if (curr == tail) {
            tail = prev;
        }
    }
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
    
    
    cout<<"head deleted"<<endl;
    deleteNode(1, head, tail);
    print(head);
    deleteNode(4, head, tail);
    print(head);
    
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    
}





// Code of Double Linked List, insert at head, tail, any position, print the linked list
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

int length(Node* head) { // Removed the reference from the head parameter
    Node* temp = head;
    int len = 0;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

void print(Node* head) { // Removed the reference from the head parameter
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node*& head, int d) { // Added a reference to head
    Node* node2 = new Node;
    node2->next = head;
    if (head != NULL) {
        head->prev = node2;
    }
    node2->prev = NULL;
    node2->data = d;
    head = node2;
}

void insertAtTail(Node*& tail, int d) { // Added a reference to tail
    Node* temp = new Node;
    temp->data = d;
    temp->next = NULL;
    temp->prev = tail;
    if (tail != NULL) {
        tail->next = temp;
    }
    tail = temp;
}

void insertAtPosition(Node*& head, Node*& tail, int position, int d) { // Added references to head and tail
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* pos = head;
    int cnt = 1;

    while (cnt < position - 1) {
        pos = pos->next;
        cnt++;
        if (pos == NULL) {
            cerr << "Position is out of range." << endl;
            return;
        }
    }

    if (pos->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    Node* nodetoinsert = new Node;
    nodetoinsert->next = pos->next;
    pos->next->prev = nodetoinsert;
    pos->next = nodetoinsert;
    nodetoinsert->prev = pos;
    nodetoinsert->data = d;
}

int main() {
    Node* node1 = new Node;
    node1->data = 23;
    node1->next = NULL;
    node1->prev = NULL;

    Node* head = node1;
    Node* tail = node1;
    cout << length(head) << endl;

    insertAtHead(head, 10);
    insertAtHead(head, 1);
    insertAtHead(head, 45);

    insertAtTail(tail, 89);

    insertAtPosition(head, tail, 2, 100);
    print(head);

    return 0;
}










// Code of circular linked list, insertion, print, delete
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void insertNode(Node* &tail, int element, int d) {
    // Create a new node
    Node* newNode = new Node;
    newNode->data = d;
    
    if (tail == NULL) {
        // If the list is empty, make the new node the tail
        tail = newNode;
        tail->next = tail; // Circular reference to itself
    }
    else {
        Node* curr = tail->next; // Start from the first node
        while (curr->data != element) {
            curr = curr->next;
            // If we looped back to the tail, element not found
            if (curr == tail->next) {
                cout << "Element not found in the list." << endl;
                return;
            }
        }

        // Insert the new node after the element
        newNode->next = curr->next;
        curr->next = newNode;

        // If the element is the tail, update the tail to the new node
        if (curr == tail) {
            tail = newNode;
        }
    }
}

void print(Node* tail) {
    if (tail == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = tail->next;
    
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);
    
    cout << endl;
}

void deletion(Node* &tail, int value) {
    if (tail == NULL) {
        cout << "List is empty, Please check again" << endl;
        return;
    }
    
    Node* prev = tail;
    Node* curr = prev->next;
    
    if (curr == tail && curr->data == value) {
        // If there's only one node in the list and it matches the value
        delete curr;
        tail = NULL;
        return;
    }

    while (curr->data != value) {
        prev = curr;
        curr = curr->next;
        if (curr == tail->next) {
            cout << "Value not found in the list." << endl;
            return;
        }
    }

    prev->next = curr->next;
    if (curr == tail) {
        tail = prev;
    }
    delete curr;
}

int main() {
    Node* tail = NULL;
    insertNode(tail, 3, 2);
    insertNode(tail, 2, 1); // Insert another element

    cout << "Circular Linked List: ";
    print(tail);
    
    deletion(tail, 2);
    cout << "Circular Linked List after deletion: ";
    print(tail);
    
    return 0;
}
