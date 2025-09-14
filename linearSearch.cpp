#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> &arr, int target){
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {10,-5,6,9,7,2};
    
    cout<<linearSearch(arr,2);
}