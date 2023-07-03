// Selection Sort
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{ 
    for (int i = 0; i < n - 1; i++) {
        int minindex = i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}


// Bubble sort
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}



// Insertion Sort
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    int temp;
    int i;
    while(i<n){
        temp = arr[i];
        int j=i-1;
        while(j>=0){
        if(arr[j]>temp){

            arr[j+1]=arr[j];
        }

        else{
            break;
        }
        j--;
        }
        arr[j+1]=temp;
        i++;
    }
}
