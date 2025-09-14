#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int>&arr){
    int n = arr.size();
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int>arr = {5,10,9,2,3,8,7};
    reverseArray(arr);
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}