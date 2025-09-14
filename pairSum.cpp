#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2,5,7,11};
    int n = arr.size();
    // vector<int> ans;
    // int target = 18;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i]+arr[j]==target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //         }
    //     }
    // }
    // cout<<ans[0]<<" "<<ans[1]<<endl;
    int i =0;
    int j = n-1;
    int target = 18;
    vector<int>ans;
    while(i<j){
        int sum = arr[i]+arr[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        
    }
    cout<<i<<" "<<j;
    return 0;
}