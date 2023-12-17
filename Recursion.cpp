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




// Merge sort using a recursion

void mergeTwoArrays(vector < int > & arr, int s, int e){
    int mid = (s+e)/2;
    int len1 = mid - s + 1;
    int len2  = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;

    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++]; 
    }

    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++]; 
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }

        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1<len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2<len2){
        arr[mainArrayIndex++] = second[index2++];
    }

}


void merge(vector < int > & arr, int s, int e){
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    merge(arr, s, mid);
    merge(arr, mid+1, e);

    mergeTwoArrays(arr, s, e);
}

void mergeSort(vector < int > & arr, int n) {
        int s = 0;
        int e = n-1;
        merge(arr, s, e);
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


// Simple question of recursion
#include<iostream>
using namespace std;
void reachHome(int src, int dest){
    cout<<"Source "<<src<<" destination "<<dest<<endl;
    
    if(src == dest){
        cout<<"Pahuch Gaya"<<endl;
        return;
    }
    
    src++;
    
    reachHome(src, dest);
}

int main(){
    int dest = 10;
    int src = 1;
    
    cout<<endl;
    
    reachHome(src,dest);
}


// Soring using recursion

#include<iostream>
using namespace std;
bool isSorted(int *arr, int size){
    if(size==0 || size==1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }
    
    else{
        bool remainingPart = isSorted(arr + 1, size-1);
        return remainingPart;
    }
}

int main(){
    int arr[5] = {2,6,4,8,9};
    int size = 5;
    int ans = isSorted(arr, size);
    if(ans){
        cout<<"Array is Sorted"<<endl;
    }
    
    else{
        cout<<"Array is not Sorted"<<endl;    
    }
    
    return 0;
}



// Code of Sum of the Arrays Elements
#include<iostream>
using namespace std;

int add(int *arr, int size){
    if(size==0){
        return 0;
    }
    
    if(size==1){
        return arr[0];
    }
    
    int remainingpart = add(arr+1, size-1);
    int beep = arr[0]+remainingpart;
    return beep;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    
    int ans = add(arr, size);
    cout<<ans<<endl;
}



// Code of Binary Search using a Recursion
#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){
    if(s>e){
        return false;
    }
    
    int mid = s+(e-s)/2;
    
    if(arr[mid]==k){
        return true;
    }
    
    if(arr[mid]<k){
        return binarySearch(arr, mid+1, e, k);
    }
    
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}

int main(){
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int key = 90;
    
    cout<<binarySearch(arr, 0, 8, key)<<endl;
}


// Code of Reverse of a String using Recursion
#include <bits/stdc++.h> 

void reverse(string& str, int i, int j){
	if(i>j){
		return;
	}

	swap(str[i], str[j]);
	i++;
	j--;

	reverse(str, i, j);
}


string reverseString(string str)
{
	int size = str.length()-1;
	reverse(str, 0, size);
	return str;
}


// Code for check whether the number is palindrome or not by using a recursion
#include <bits/stdc++.h> 

bool check(int arr[], int i, int j){
    if(i >= j){
        return true;
    }

    if(arr[i] != arr[j]){
        return false;
    }

    return check(arr, i + 1, j - 1);
}

bool checkPalindrome(long long N)
{
    int i = 0;
    int arr[64];
    while(N != 0){
        int ans = N % 2;
        N = N / 2;
        arr[i] = ans;
        i++;
    }

    return check(arr, 0, i - 1);
}


// Quick Sort Algorithm
#include <bits/stdc++.h> 

int partition(vector<int> &arr, int low, int high){
    int pivot = low;
    int i = low;
    int j = high;

    while(i<j){
      while (arr[i] <= arr[pivot] && i <= high-1) {
        i++;
      }

            while (arr[j] > arr[pivot] && j >= low+1) {
              j--;
            }


        if(i<j){
        swap(arr[i], arr[j]);
    }
    }

    swap(arr[low], arr[j]);
    return j;
}

void qS(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        qS(arr, low, pIndex-1);
        qS(arr, pIndex+1, high);
    }
}


vector<int> quickSort(vector<int> arr)
{
    qS(arr, 0, arr.size()-1);
    return arr;
}

