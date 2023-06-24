                // Binary Search Algorithm

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start)/2;
    
//     while(start<=end){
//         if(arr[mid]==key){
//             return mid;
//         }
        
//         else if(arr[mid]<key){
//             start = mid + 1;
//         }
        
//         else if(arr[mid]>key){
//             end = mid - 1;
//         }
        
//         mid = start + (end - start)/2;
//     }
    
//     return -1;
// }

// int main(){
//     int odd[5]={1,3,5,7,9};
//     int even[6]={3,4,7,8,23,45};
    
//     int oddIndex = binarySearch(odd, 5, 5);
//     int evenIndex = binarySearch(even, 6, 23);
//     cout<<oddIndex<<endl;
//     cout<<evenIndex<<endl;
//     return 0;
// }


// Code for searching the first and last occurence of the element 

// #include<iostream>
// #include<vector>
// using namespace std;
// int leftSearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start)/2;
//     int ans;
    
//     while(start<=end){
//         if(arr[mid]==key){
//             ans = mid;
//             end = mid-1;
//         }
        
//         else if(arr[mid]<key){
//             start = mid + 1;
//         }
        
//         else if(arr[mid]>key){
//             end = mid - 1;
//         }
        
//         mid = start + (end - start)/2;
//     }
    
//     return ans;
// }


// int rightSearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start)/2;
//     int ans;
    
//     while(start<=end){
//         if(arr[mid]==key){
//             ans = mid;
//             start = mid+1;
//         }
        
//         else if(arr[mid]<key){
//             start = mid + 1;
//         }
        
//         else if(arr[mid]>key){
//             end = mid - 1;
//         }
        
//         mid = start + (end - start)/2;
//     }
    
//     return ans;
// }


// int main(){
//     int odd[5]={5,5,5,5,5};
//     int t = leftSearch(odd, 5, 5);
//     int r = rightSearch(odd, 5, 5);
//     cout<<t<<" "<<r<<endl;
//     return 0;
// }


// Code for finding the pivot index
// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int rightSum = 0, leftSum = 0;
//         for (int i = 1; i < nums.size(); i++) {
//             rightSum += nums[i];
//         }
        
//         for (int i = 0; i < nums.size(); i++) {
//             if (rightSum == leftSum) {
//                 return i;
//             }

//             leftSum += nums[i];
            
//             if (i + 1 < nums.size()) {
//                 rightSum -= nums[i+1];
//             }
//         }
//         return -1;
//     }
// };


// Code for finding the peak element in an array
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int start = 0;
//         int end = arr.size() - 1;
//         int mid = start + (end - start)/2;
    
//     while(start<end){
//     if(arr[mid+1]>arr[mid]){
//         start=mid+1;
//     }

//     else{
//         end=mid;
//     }

//     mid = start + (end - start)/2;
//     }
//     return mid;
//     }
// };