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


