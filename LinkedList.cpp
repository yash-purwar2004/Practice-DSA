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