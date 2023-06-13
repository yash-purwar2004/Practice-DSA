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