#include<stdio.h>
void main(){
  int s1, s2, s3, tot;
  float avg;
  printf("Enter the marks of subject 1: ");
  scanf("%d", &s1);
  printf("Enter the marks of subject 2: ");
  scanf("%d", &s2);
  printf("Enter the marks of subject 3: ");
  scanf("%d", &s3);
  tot=s1+s2+s3;
  avg=tot/3;
  printf("The total is %d and average is %d", tot, avg);
}