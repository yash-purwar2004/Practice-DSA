// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int num = 3;
    int *ptr=&num;
    cout<<"before "<<*ptr<<endl;
    num++;
    cout<<"After "<<*ptr<<endl;
    
    cout<<"Size of Num "<<sizeof(num)<<endl;
    cout<<"Size of Pointer "<<sizeof(ptr)<<endl;
    
    int *p = &num;
    cout<<(*p)++<<endl;
    cout<<num;
    
    // Copying a Pointer
    int *q = p;
    cout<<p<<" = "<<q<<endl;
    cout<<*p<<" = "<<*q<<endl;
    
    // important concept
    int i=2;
    int *t = &i;
    cout<<t<<endl;
    t=t+1;
    cout<<t;
    return 0;
}