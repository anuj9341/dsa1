#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int matrix[][3],int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int maxRowSum(int matrix[][3],int rows, int cols){
    int maxSum = INT_MIN;
    for(int i=0; i<rows; i++){
            int sum = 0;
        for(int j=0; j<cols; j++){
            sum += matrix[i][j];
        }
        maxSum = max(maxSum,sum);
    }
    return maxSum;
}
int diagonalSum(int matrix[][3],int rows,int cols){
    int sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(i==j){
                sum += matrix[i][j];
            }else if(j ==cols-i-1){
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6,},{7,8,9}};
    int rows = 3;
    int cols = 3;
    //cout<<linearSearch(matrix,rows,cols,8);
    //cout<<maxRowSum(matrix,rows,cols);

    cout<<diagonalSum(matrix,rows,cols);
    return 0;
}