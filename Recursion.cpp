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