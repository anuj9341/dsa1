#include<bits/stdc++.h>
using namespace std;
// int binarysearch(vector<int> &arr, int tar){
//     int n = arr.size();
//     int st=0,end=n-1;
    
//     while(st<=end){
//         int mid = st + (end-st)/2;
//         if(arr[mid]==tar){
//             return mid;
//         }else if(arr[mid]>tar){
//             end = mid - 1;
//         }else{
//             st = mid +1;
//         }
//     }
//     return -1;
// }
int recbinarysearch(vector<int> &arr, int st, int end,int tar){
    int mid = st + (end-st)/2;
    if(st<=end){
        if(arr[mid]==tar){
            return mid;
        }else if(arr[mid]>tar){
            return recbinarysearch(arr,st,mid-1,tar);
        }else{
            return recbinarysearch(arr,mid+1,end   ,tar);
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1,0,3,5,8,9,11};
    int tar = 9;
    cout<<recbinarysearch(arr,0,arr.size()-1,tar);
}