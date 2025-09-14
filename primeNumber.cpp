#include<bits/stdc++.h>
using namespace std;
string isPrime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return "Non prime number";
        }
    }
    return "Prime Number";
}

int main(){

    //prime number
    cout<<isPrime(4);
    return 0;
}    
    