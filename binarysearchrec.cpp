#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&arr, int low, int high, int x){
    if(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            return binarysearch(arr,0,mid-1,x);
        }
        else{
            return binarysearch(arr,mid+1,high,x);
        }
    }
    return -1;
}

int main(){
    vector<int>arr = {2,3,8,9,15,17,18};
    int n = arr.size();
    int x;
    cout<<"Enter the element that you want to search"<<endl;
    cin>>x;
    int result = binarysearch(arr,0,n-1,x);
    if(result == -1){
        cout<<"Element is not found in array"<<endl;
    }
    else{
        cout<<"Element is found at index:"<<result;
    }

}