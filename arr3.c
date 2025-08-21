#include<stdio.h>
void main(){
    int sum=0;
    int arr[2][2][3]={

              {
                {1,2,3},
                {4,5,6}
              },
              {
                {7,8,9},
                {10,11,12}
              }
    };
    int depth=2;
    int rows=2;
    int columns=3;

    for(int i=0;i<depth;i++){
        for(int j=0;j<rows;j++){
            for(int k=0;k<columns;k++){
                sum+=arr[i][j][k];
            }
        }
    }
    printf("Sum= %d",sum);
}