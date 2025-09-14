#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &arr, int n ){
    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}
void selectionSort(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
            int smallestidx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx = j;
            }
        }
        swap(arr[i],arr[smallestidx]);
    }
}
insertionSort(vector<int> &arr, int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
int main(){
    vector<int> arr = {5,4,1,2,3};
    int n = arr.size();
    //bubbleSort(arr,n);
    //selectionSort(arr,n);
    insertionSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}