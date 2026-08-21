#include<stdio.h>
void main(){
    int min;
    printf("Enter the no. of minutes: ");
    scanf("%d", &min);
    printf("The time in hours is %.2f", (float)(min / 60));
}