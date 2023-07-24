// Create a 2-D array
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}



// Linear Search in 2D array
#include <iostream>
using namespace std;
bool for_search(int arr[][3], int target, int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    cout<<"Enter the number"<<endl;
    int target;
    cin>>target;
    
    if(for_search(arr, target, 3, 3)){
        cout<<"Element Found";
    }
    
    else{
        cout<<"Element not found";
    }
    
    return 0;
}




// Code for the sum of all the rows in an array
#include <iostream>
using namespace std;
int main() {
    int arr[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    
    for(int i=0; i<3; i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum = sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}


// Code for 2D Array, print like a wave
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>temp;
    for(int i=0; i<mCols; i++){

            if((i%2)==0){
              for(int j=0; j<nRows; j++){
                    temp.push_back(arr[j][i]);
                }
            }


            else{
                
                for(int j=nRows-1; j>=0; j--){
                temp.push_back(arr[j][i]);
              }
            }
    }
    return temp;
}




// Code for spiral a matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int cols = matrix[0].size();
        int count = 0;
        int total = row*cols;
        vector<int>ans;

        //index initialization
        int  srow = 0;
        int scols = 0;
        int erow = row-1;
        int ecols = cols-1;

        while(count < total){
            for(int index = scols; count < total && index<=ecols; index++){
                ans.push_back(matrix[srow][index]);
                count++;
            }
            srow++;

            for(int index = srow; count < total && index<=erow; index++){
                ans.push_back(matrix[index][ecols]);
                count++;
            }

            ecols--;

            for(int index = ecols; count < total && index>=scols; index--){
                ans.push_back(matrix[erow][index]);
                count++;
            }

            erow--;

            for(int index = erow; count < total && index>=srow; index--){
                ans.push_back(matrix[index][scols]);
                count++;
            }

            scols++;
        }

        return ans;
    }
};



// Code for search in a 2D array using binary search
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = (row*col)-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            int element = matrix[mid/col][mid%col];
            if(target == element){
                return true;
            }

            else if(element<target){
                start = mid+1;
            }

            else if(element>target){
                end = mid-1;
            }
        }
        return false;
    }
};