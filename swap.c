#include<stdio.h>
void main(){
  int n1,n2,c;
  printf("Enter the number n1: ");
  scanf("%d", &n1);
  printf("Enter the number n2: ");
  scanf("%d", &n2);
  c=n1;
  n1=n2;
  n2=c;
  printf("the swapped values of n1 is %d and n2 is %d", n1, n2);  
}