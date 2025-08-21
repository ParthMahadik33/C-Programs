//no.of even numbers in array
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    printf("The array contains '%d' even numbers",count);
    return 0;
}

