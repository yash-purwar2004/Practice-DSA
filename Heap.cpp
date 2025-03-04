#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    // for max heap
    // TC = O(logn)
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;

    
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }


    // print the heap
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }



    // delete root node
    void deleteRoot(){
        if(size==0){
            cout<<"Heap is empty"<<endl;
            return;
        }

        // step1: put last element to root node
        arr[1] = arr[size];
        // step2: remove last element
        size = size-1;

        // step3: take root node to its correct position
        int index = 1;
        while(index<size){
            int leftIndex = 2*index;
            int rightIndex = 2*index+1;

            if(leftIndex<size && arr[index] < arr[leftIndex]){
                swap(arr[index],arr[leftIndex]);
                index = leftIndex;
            }
            else if(rightIndex<size && arr[index] < arr[rightIndex]){
                swap(arr[index],arr[rightIndex]);
                index = rightIndex;
            }
            else{
                return;
            }
        }
    }


    void heapify(int arr[], int n, int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left<=n && arr[left]>arr[largest]){
            largest = left;
        }

        if(right<=n && arr[right]>arr[largest]){
            largest = right;
        }

        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }   
    }



    void heapSort(int arr[], int n){
        int t = n;

        while(t>1){

            // swap root node with last node
            swap(arr[1],arr[t]);

            // remove last node
            t--;

            // take root node to its correct position
            heapify(arr,t,1);
        }
    }

};

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    h.deleteRoot();
    h.print();

    int arr[] = {-1, 54, 55, 60, 52, 50, 58};
    int n = 7;

    // heap creation
    for(int i=n/2; i>0; i--){
        h.heapify(arr,n,i);
    }

    cout<<endl;

    h.heapSort(arr,n);

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    //max heap
    priority_queue<int> pq;
    pq.push(50);
    pq.push(55);
    pq.push(53);
    pq.push(52);
    pq.push(54);

    cout<<"Element at top: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Element at top: "<<pq.top()<<endl;




    // min heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(50);
    pq1.push(55);
    pq1.push(53);
    pq1.push(52);
    pq1.push(54);

    cout<<"Element at top: "<<pq1.top()<<endl;
    pq1.pop();
    cout<<"Element at top: "<<pq1.top()<<endl;
    
    return 0;
}