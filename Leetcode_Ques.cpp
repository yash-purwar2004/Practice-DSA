// Subtract the product and the sum of digits of an integer
#include<iostream>
using namespace std;
int main(){
    int N;
    int a,b, sum=0, pro=1, diff;
    cin>>N;
    while(N!=0){
        a = N%10;
        b = N/10;
        cout<<a<<endl;
        N=b;
        sum = sum + a;
        pro = pro * a;
    }
    cout<<"The sum of the digit is "<<sum<<endl;
    cout<<"The product of the digit is "<<pro<<endl;
    if(sum>pro){
        cout<<"The difference of sum and product is "<<sum-pro<<endl;
    }

    else if(pro>sum){
        cout<<"The difference of the sum and product is "<<pro-sum<<endl;
    }
}

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


// Code for finding th nCr
// #include<iostream>
// using namespace std;
// int func(int a){
//     int arr=a;
//     while(a!=1){
//         arr= arr*(a-1);
//         a--;
//     }
//     return arr;
// }
    
//     int nCr(int a, int b){
//         int num = func(a);
//         int denom = func(b)*func(a-b);
//         return num/denom;
     
//     }
   
// int main(){
//     int N, R, diff;
//     cin>>N>>R;
//     cout<<nCr(N,R);
// }


// Print the counting of numbers
// #include<iostream>
// using namespace std;
// int count(int a){
//         for(int i=1; i<=a; i++){
//             cout<<i<<" ";
//         } 
//         return 0;
//     }
   

// int main(){
//     int N;
//     cin>>N;
//     count(N);
// }


// Code for finding the nth term of AP
// #include<iostream>
// using namespace std;
// int func(int n){
//     int ap;
//     for(int i=1; i<=n; i++){
//         ap = 3*i + 7;    
//     }
    
//     return ap;
// }

// int main(){
//     int a;
//     cin>>a;
//     cout<<"The nth term of AP is "<<func(a);
// }



// #include<iostream>
// using namespace std;
// bool func(int n){
//     int count = 0;
//     for(int i=0; i<=32; i++){
//         if(n==1){
//             count=count+1;
//         }
//         n=n>>1;
//     }
//     return count;
// }

// int main(){
//     int a, b;
//     cin>>a>>b;
//     cout<<func(a)+func(b);
// }


// Code for adding the elements of array
// #include<iostream>
// using namespace std;
// int func(int num[], int n){
//     int d=0;
//     for(int j=0; j<n; j++){
//         d=d+num[j];
//     }
  
    
//     return d;
// }

// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }
    
//     cout<<func(arr, size)<<" ";
// }


// Code for reversing the array using for loop
// #include<iostream>
// using namespace std;
// void func(int num[], int n){
//     for(int j=n-1; j>=0; j--){
//         cout<<num[j]<<" ";
//     }
// }

// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int size=10;
//     func(arr, size);
// }


// Code for swapping the adjacent elements;
// #include<iostream>
// using namespace std;
// void func(int num[], int n){
//     int temp;
//     int k=0, i=1;
//     for(int j=0; j<n; j=j+2){
//         for( ;i>=k; i--){
//             cout<<num[i]<<" ";
//         }
//         i=i+4;
//         k=k+2;
        
//     }
// }

// int main(){
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0; i<size; i++){
//         cin>>arr[i];    
//     }
    
//     func(arr, size);
// }


// code for finding unique element
// int findUnique(int *arr, int size)
// {
//     int k;
//     for(int i=0; i<size; i++){
//         k = k^arr[i];
//     }
//     return k;
// }

// Two pointer approach
// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	vector<int> ans;
// 	int i=0, j=0;
// 	while(i<n && j<m){
// 			if(arr1[i]==arr2[j]){
// 				ans.push_back(arr1[i]);
// 				i++;
// 				j++;
// 			}

// 			else if(arr1[i]<arr2[j]){
// 				i++;
// 			}

// 			else{
// 				j++;
// 			}
// 		}
// 	return ans;
// }


// Question of Pair
// #include <bits/stdc++.h>
// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    vector<vector<int>>ans;

//    for(int i=0; i<arr.size(); i++){
//       for(int j=i+1; j<arr.size(); j++){
//          if(arr[i]+arr[j]==s){
//             vector<int>temp;
//             temp.push_back(min(arr[i], arr[j]));
//             temp.push_back(max(arr[i], arr[j]));
//             ans.push_back(temp);
//          }
//       }
//    }
//    sort(ans.begin(), ans.end());
//    return ans;
// }


// Sort 0,1,2 coding ninja problems
// #include <bits/stdc++.h> 
// void sort012(int *arr, int n)
// {
//    int lo, hi, mid;
//    lo=0;
//    mid=0;
//    hi=n-1;
//    while(mid<=hi){
//       if(arr[mid]==0){
//          swap(arr[lo], arr[mid]);
//          lo++;
//          mid++;
//       }

//       else if(arr[mid]==1){
//          arr[mid] == 1;
//          mid++;
//       }

//       else if(arr[mid]==2){
//          swap(arr[mid], arr[hi]);
//          hi--;
//       }
//    }
// }


// Sum of Two Arrays
// #include <bits/stdc++.h> 
// vector<int>reverse(vector<int>v){
//     int s = 0;
//     int e = v.size()-1;

//     while(s<e){
//         swap(v[s++], v[e--]);
//     }

//     return v;
// }

// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	int i = n-1;
//     int j = m-1;
//     int carry = 0;
//     vector<int>ans;

//     while(i>=0 && j>=0){
//         int val1 = a[i];
//         int val2 = b[j];
//         int sum = val1 + val2 + carry;
//         carry = sum/10;
//         int value = sum%10;
//         ans.push_back(value);
//         i--;
//         j--;
//     }

//     while(i>=0){
//         int sum = a[i] + carry;
//         carry = sum/10;
//         int value = sum%10;
//         ans.push_back(value);
//         i--;
//     }

//     while(j>=0){
//         int sum = b[j] + carry;
//         carry = sum/10;
//         int value = sum%10;
//         ans.push_back(value);
//         j--;
//     }


//     while(carry!=0){
//         int sum = carry;
//         carry = sum/10;
//         int value = sum%10;
//         ans.push_back(value);
//     }

//     return reverse(ans);
// }



// Check whether the number is palindrome or not
// #include <bits/stdc++.h> 
// string eliminate_unwanted(string s){
//     int i = 0;
//     string v;
//     while (i < s.length()){
//         if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
//             v += s[i];
//         }

//         else if (s[i] >= 'A' && s[i] <= 'Z'){
//             char lowercase = s[i] + 32;
//             v += lowercase;
//         }
//         i++;
//     }
//     return v;
// }

 

// bool checkPalindrome(string a){
//     a=eliminate_unwanted(a);
//     int s = 0;
//     int e = a.size() - 1;

//     while (s <= e){
//         if (a[s] != a[e])
//             return false;

//         else{
//             s++;
//             e--;
//         }

//     }

//     return true;
// }