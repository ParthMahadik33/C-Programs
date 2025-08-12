#include <stdio.h>
#include<math.h>
int main() {
    int num;
    float result;
    printf("Enter the Number to get the square root value :-\n");
    scanf("%d",&num);
    result = sqrt(num);
    printf("Square root value of %d number =\t %f",num,result);
    return 0;
}
