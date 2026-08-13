#include<stdio.h>
#include<math.h>
void main(){
    float bytes;
    printf("Enter the no. of bytes: ");
    scanf("%f", &bytes);
    printf("The no. of KB is %f",bytes/(pow(2,10)));
    printf("\nThe no. of MB is %f",bytes/(pow(2,20)));
    printf("\nThe no. of GB is %f",bytes/(pow(2,30)));
    int x;
    x=(2^10);
    printf("\nx=%d",x);
}

