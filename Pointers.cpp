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



// Double Pointers

#include <iostream>
using namespace std;
void update(int **l){
    // kya kuch change hoga - no change
    // l=l+1;
    // kya kuch change hoga - yes
    // *l=*l+1;
    // kya kuch change hoga?
    **l=**l+1;
}

int main(){
int i=10;
int *p = &i;
int **l = &p;

cout<<"Before"<<endl;
cout<<i<<endl;
cout<<p<<endl;
cout<<l<<endl;

update(l);

cout<<"After"<<endl;
cout<<i<<endl;
cout<<p<<endl;
cout<<l<<endl;


return 0;
}


// Reference Variable
#include <iostream>
using namespace std;
void update(int &n){
    n++;
}

int main() {
    int i = 5;
    int &j = i;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    
    int k=4;
    cout<<"Before "<<k<<endl;
    update(k);
    cout<<"after "<<k<<endl;
    return 0;
}


// Bad Practice
int &func(int a){
    int num = a;
    int &ans = num;
    return ans;
}

// Bad Practice
int *func(int n){
    int *ptr = &n;
    return ptr;
}


// Make a 2D array using double pointer
#include <iostream>
using namespace std;

int main() {
    int row;
    cin>>row;
    
    int col;
    cin>>col;
    

    int **arr = new int *[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0; i<row; i++){
        delete []arr[i];
    }
    
    delete []arr;
    return 0;
}


// Code of Dclaring a macro keyword
#include<iostream>
using namespace std;
// #define PI 3
#define AREA(l,b) (l*b);
#define min(a,b) (((a)<(b)) ? (a):(b))

int main(){
//     cout<<PI * 1 * 1<< endl;
    
    int l1, l2, area;
    cin>>l1>>l2;
    area = AREA(l1,l2)
    cout<<area<<endl;
    
    int a1, b1;
    cin>>a1>>b1;
    cout<<"Minimum value between a1 and b1 is "<<min(a1,b1)<<endl;
}
