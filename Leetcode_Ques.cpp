// Subtract the product and the sum of digits of an integer
// #include<iostream>
// using namespace std;
// int main(){
//     int N;
//     int a,b, sum=0, pro=1, diff;
//     cin>>N;
//     while(N!=0){
//         a = N%10;
//         b = N/10;
//         cout<<a<<endl;
//         N=b;
//         sum = sum + a;
//         pro = pro * a;
//     }
//     cout<<"The sum of the digit is "<<sum<<endl;
//     cout<<"The product of the digit is "<<pro<<endl;
//     if(sum>pro){
//         cout<<"The difference of sum and product is "<<sum-pro<<endl;
//     }

//     else if(pro>sum){
//         cout<<"The difference of the sum and product is "<<pro-sum<<endl;
//     }
// }

// Find the number of 1 bits
// #include<iostream>
// using namespace std;
// int hammingWeight(uint32_t n){
//     int count = 0;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }

//         n=n>>1;
//     }
//     cout<<count;
// }


// Code for converting decimal into binary
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int N;
//     cin>>N;
//     int a,b,rev=0;
//     int i=0;
//     while(N!=0){
//         a = N%2;
//         rev = (a * pow(10, i)) + rev;
//         i=i+1;
//         N=N/2;
//     }
//     cout<<rev;
// }


// Code for converting binary into decimal
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int N;
//     cin>>N;
//     int i=0, add=0;
//     while(N!=0){
//         int digit = N%10;
//         if(digit==1){
//             add = pow(2,i) + add;
//         }
//          N=N/10;
//          i++;
//     }
//     cout<<add;
// }


// Reverse the Integer
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int N, a, b;
//     cin>>N;
//     int rev=0;
//     while(N!=0){
//         a=N%10;
//         if((rev>INT16_MAX/10)||(rev<INT16_MIN/10)){
//              return 0;
//         }
//         rev = (rev*10)+a;
//      N=N/10;
//     }
//     cout<<rev;
// }