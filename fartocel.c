#include<stdio.h>
void main(){
    float far;
    printf("Enter the temp. in farenheit: ");
    scanf("%f", &far);
    printf("The temp. in farenheit is %.2f",((far-32)*(5.0/9)));
}

