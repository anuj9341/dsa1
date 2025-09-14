#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {3,-4,5,4,-1,7,-8};
    int n = arr.size();
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n; j++){
    //         for(int k=i; k<=j; k++){
    //             cout<<arr[k];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    //brute force approach
    // int maxSum = 0;
    // for(int i=0; i<n; i++){
    //     int currSum = 0;
    //     for(int j=i; j<n; j++){
    //         currSum += arr[j];
    //         maxSum = max(currSum, maxSum);
    //     }
        
    // }
    // cout<<maxSum;
    //kadane's Algorithm
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum,maxSum);
        currSum = currSum<0 ? 0:currSum;
    }
    cout<<maxSum;
    return 0;
}