#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&arr,int low,int high,int x){
    
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {4,5,8,9,10,15,16};
    int n = arr.size();
    int x;
    cout<<"Enter the element that you want to search"<<endl;
    cin>>x;
    
    int result = binarysearch(arr,0,n-1,x);
    if(result == -1){
        cout<<"Element is not found in array";
    }
    else{
        cout<<"Element is found in array at index:"<<result;
    }
    return 0;
}