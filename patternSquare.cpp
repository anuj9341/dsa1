#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0; i<n; i++){
    //     char ch ='A';
    //     for(int j=0; j<n; j++){
    //         cout<<ch<<" ";
    //         ch = ch+1;
    //     }
    //     cout<<endl;
    // }
    // int count =1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout<<count<<" ";
    //         count += 1;
    //     }
    //     cout<<endl;
    // }
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }
    return 0;
}