#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int st, int mid, int end){
    vector<int>temp;
    int i=st, j=mid+1;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=0; i<temp.size(); i++){
        arr[i+st] = temp[i];
    }
}
void mergeSort(vector<int>&arr, int s, int e){
    if(s<e){
        int mid = s + (e-s)/2;
        mergeSort(arr,s,mid);
        mergeSort(arr,mid+1, e);
        merge(arr,s,mid,e);
    }
}
int main(){
    vector<int> arr = {12,31,35,8,32,17};
    mergeSort(arr,0,arr.size()-1);
    for(auto val : arr){
        cout<<val<<" ";
    }
}