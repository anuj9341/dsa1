#include<bits/stdc++.h>
using namespace std;
int smallestarr(vector<int>& arr){
    int mini = INT_MAX;
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]<mini){
            mini = arr[i];
        }
    }
    return mini;
}
int largestarr(vector<int> &arr){
    int maxi = INT_MIN;
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}
int secondele(vector<int> &arr){
    int n = arr.size();
    if(n==0 || n==1){
        cout<<-1<<" "<<-1;
    }
    int small = INT_MAX, ssmall = INT_MAX;
    int large = INT_MIN, slarge = INT_MIN;
    for(int i=0; i<n; i++){
    //     small = min(small,arr[i]);
    //     large = max(large,arr[i]);
        if(arr[i]<small){
            small = arr[i];
        }
        if(arr[i]>large){
            large = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]<ssmall && arr[i]!=small){
            ssmall = arr[i];
        }
        if(arr[i]>slarge && arr[i]!=large){
            slarge = arr[i];
        }
    }
    cout<<ssmall<<" "<<slarge;
}
void printarr(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }


}
void reversearr(vector<int> &arr){
    int n = arr.size();
    int st = 0, end = n-1;
    while(st<end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    printarr(arr);
}
void countfreq(vector<int> &arr){
    int n = arr.size();
    unordered_map<int,int> map;
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }
    for(auto x : map){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main(){
    vector<int> arr = {0,0,5,3,4,4,1};
    cout<<smallestarr(arr);
    cout<<endl;
    cout<<largestarr(arr)<<endl;
    secondele(arr);
    cout<<endl;
    reversearr(arr);
    cout<<endl;
    countfreq(arr);
}