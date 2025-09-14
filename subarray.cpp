#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array element"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array Element are:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int j;
    for(int i=0; i<n; i++){
        for(j=i; j<n; j++){
            for(int k=i;k<j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}