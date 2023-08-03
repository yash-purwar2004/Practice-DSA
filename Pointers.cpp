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

#include <iostream>
using namespace std;

int main() {
    int arr[10]={8,7,3,4,5,6,7,8,9,0};
    int *ptr = &arr[0];
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<arr<<endl;
    cout<<&arr[1]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*arr+1<<endl;
    int i=4;
    cout<<i[arr]<<endl;
    return 0;
}

// Create a character array
#include <iostream>
using namespace std;
int main() {
    int arr[5]={1,2,3,4,5};
    char ch[6]={"abcde"};
    char *p = "abcde";
    cout<<*(p+1)<<endl;

    cout<<arr<<endl;
    cout<<ch<<endl;
    
    char *c = &ch[0];
    // print entire string
    cout<<*c<<endl;
    
    // Jab tk null character nhi milega tab tk print hota jayega
    char temp='x';
    char *ptr = &temp;
    cout<<ptr;
    
    return 0;
}




// Pointers & Functions
#include <iostream>
using namespace std;
int update(int *nm){
    *nm=*nm+1;
    return *nm;
}

int upar(int *arr){
    return *(arr+1);
}

int main() {
    int num = 123;
    cout<<update(&num)<<endl;
    
    int arr[5]={1,2,3,4,5};
    cout<<upar(arr)<<endl;
    return 0;
}