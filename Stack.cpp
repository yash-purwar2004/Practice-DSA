// Implementation of Stack using STL

#include<iostream>
#include<stack>
using namespace std;
int main(){
    
    // creation of stack
    stack<int>s;
    
    // push operation
    s.push(2);
    s.push(3);
    
    // Remove the top element
    s.pop();
    
    cout<<"Printing top element "<<s.top()<<endl;
    
    if(s.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    
    else{
        cout<<"Stack is not Empty"<<endl;
    }
    
    cout<<"Size of Stack is "<<s.size()<<endl;
}



// Implementation of Stack using Class
#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int top = -1;
    int size;
    int *arr = new int[size];
    
    
    void push(int element){
        if((size-top)>1){
            top++;
            arr[top] = element;
        }
        
        else{
            cout<<"Stack Overflow "<<endl;
        }
    }
    
    void pop(){
        if(top>=0){
            top--;
        }
        
        else{
            cout<<"Stack Underflow "<<endl;
        }
    }
    
    int peek(){
        if(top>=0){
            return arr[top];
        }
        
        else{
            cout<<"Stack is Empty "<<endl;
            return -1;
        }
    }
    
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        
        else{
            return false;
        }
    }
};

int main(){
    Stack s;
    s.size = 5;
    s.push(22);
    s.push(43);
    s.push(44);
    s.push(54);
    
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();

    
}