#include<bits/stdc++.h>
using namespace std;
int smallestNoArray(int arr[], int n){
    //int n = arr.size();
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    return mini;
}
int largestNoArray(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
        
    }
    return 0;
}
int main(){
    int arr[5] = {1,-5,10,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<smallestNoArray(arr,n)<<endl;
    cout<<largestNoArray(arr,n)<<endl;
    return 0;
}