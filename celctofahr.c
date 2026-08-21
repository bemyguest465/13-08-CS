#include<stdio.h>
void main() {
    int celc;
    printf("Enter the temp in Celsius: ");
    scanf("%d", &celc);
    printf("The temp in Fahrenheit is %.2f", (float)(celc * 9/5 + 32));
}