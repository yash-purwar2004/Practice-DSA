// Patterns

// ***
// ***
// ***
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cout<<"*";
        }
    cout<<endl;
    }
}


// 111
// 222
// 333
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cout<<i;
        }
    cout<<endl;
    }
}


// 123
// 123
// 123
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cout<<j;
        }
        cout<<endl;
    }
}


// 321
// 321
// 321
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cout<<N-j+1;
        }
        cout<<endl;
    }
}


// *
// **
// ***
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";
        }
    cout<<endl; 
    }
}


// 1
// 22
// 333
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
    cout<<endl; 
    }
}


// 1
// 23
// 456
#include<iostream>
using namespace std;
int main(){
    int N, count=1;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout<<count++<<" ";
        }
    cout<<endl;
    }
}


// 1
// 21
// 321
#include<iostream>
using namespace std;
int main(){
    int N, count=1;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout<<i-j+1<<" ";
        }
    cout<<endl;
    }
}

// AAA
// BBB
// CCC
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            char ch = 'A' + i-1;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
}


// ABC
// ABC
// ABC
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            char ch = 'A'+j-1;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
}


// ABC
// DEF
// GHI
#include<iostream>
using namespace std;
int main(){
    int N, count=0;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            char ch = 'A'+ count++;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
}


// ABC
// BCD
// CDE
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
}


// A
// BB
// CCC
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            char ch = 'A'+i-1;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
}


// A
// BC
// DEF
#include<iostream>
using namespace std;
int main(){
    int N, count=0;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            char ch = 'A'+ count++;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
}


// A
// BC
// CDE
// DEFG
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
        }
    cout<<endl;
    }
}



// D
// CD
// BCD
// ABCD
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            char ch = 'A' + N-i+j-1;  
            cout<<ch<<" "; 
        }
    cout<<endl;
    }
}


// A B C
// B C D
// C D E
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            char ch = 'A' + j + i-2;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


//    *
//   **
//  ***
// ****
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        int space = N-i;
        while(space){
            cout<<" ";
            space=space-1;
        }

        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }

    cout<<endl;
    }
}


// * * * *
// * * *
// * *
// *
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N-i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
}


// * * * *
//   * * *
//     * *
//       *
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

    for(int i=1; i<=N; i++){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }

        int j=1;
        while(j<=N-i+1){
            cout<<"*";
            j=j+1;
        }

    cout<<endl;
    }
}


// 1111
//  222
//   33
//    4
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

    for(int i=1; i<=N; i++){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }

        int j=1;
        while(j<=N-i+1){
            cout<<i;
            j=j+1;
        }

    cout<<endl;
    }
}


//    1
//   22
//  333
// 4444
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;

    for(int i=1; i<=N; i++){
        int space=N-i;
        while(space){
            cout<<" ";
            space=space-1;
        }

        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }

    cout<<endl;
    }
}


// 1234
//  567 
//   89
//    10
#include<iostream>
using namespace std;
int main(){
    int N, count=1;
    cin>>N;

    for(int i=1; i<=N; i++){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }

        int j=1;
        while(j<=N-i+1){
            cout<<count++;
            j=j+1;
        }

    cout<<endl;
    }}


// 1234
//  234
//   34
//    4
#include<iostream>
using namespace std;
int main(){
    int N, count=0;
    cin>>N;
    for(int i=1; i<=N; i++){
        int space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }

        int j=1;
        while(j<=N-i+1){
            cout<<j+count;
            j=j+1;
        }
        count++;
        cout<<endl;
}
}


//    1
//   121
//  12321
// 1234321
#include<iostream>
using namespace std;
int main(){
    int N, count=0;
    cin>>N;
    int j=N;
    for(int i=1; i<=N; i++){
        int space = N-i;
        while(space){
            cout<<" ";
            space--;
        }
        
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

        int start = i-1;
        while(start){
            cout<<start;
            start--;
        }
    cout<<endl;
    }
}

// 1234512345
// 1234**1234
// 123****123
// 12******12
// 1********1
#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N-i+1; j++){
            cout<<j;
        }

    int star=0;
    while(star<i-1){
        cout<<"**";
        star++;
    }

    for(int j=1; j<=N-i+1; j++){
        cout<<j;
    }

    cout<<endl;
    }
}