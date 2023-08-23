#include <iostream>
using namespace std;

int factorial(int k){
    if(k==0){
        return 1;
    }
        int small = factorial(k-1);
        int large = k * small;
        return large;
    }


int main()
{
    int n;
    cin>>n;
    
    int ans = factorial(n);
    cout<<ans<<endl;
}



// Code of 2 raise to power 'n' by using factorial
#include<iostream>
using namespace std;
int power(int n){
    if(n == 0){
        return 1;
    }
    
    int smaller = power(n-1);
    int bigger = 2 * smaller;
    return bigger;
}

int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans<<endl;
}