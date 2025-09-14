#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    // char ch = 'A';
    // for(int i=0; i<=n; i++){
    //     for(int j=0;j<=i; j++){
    //         cout<<ch<<" ";
    //     }
    //     ch+=1;
    //     cout<<endl;
    // }
    
    // for(int i=0; i<n; i++){
    //     int num = 1;
    //     for(int j=0; j<=i; j++){
    //         cout<<num<<" ";
    //         num += 1;
    //     }
    //     cout<<endl;
    // }
    // for(int i=1; i<=n; i++){
    //     for(int j=i; j>0; j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    //floyd's triangle pattern
    // int num = 1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<num<<" ";
    //         num += 1;
    //     }
        
    //     cout<<endl;
    // }
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<=n-i; j++){
            cout<<i+1<<;
        }
        cout<<endl;
    }
}
