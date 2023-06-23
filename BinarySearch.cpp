                // Binary Search Algorithm

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        
        else if(arr[mid]<key){
            start = mid + 1;
        }
        
        else if(arr[mid]>key){
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
    }
    
    return -1;
}

int main(){
    int odd[5]={1,3,5,7,9};
    int even[6]={3,4,7,8,23,45};
    
    int oddIndex = binarySearch(odd, 5, 5);
    int evenIndex = binarySearch(even, 6, 23);
    cout<<oddIndex<<endl;
    cout<<evenIndex<<endl;
    return 0;
}