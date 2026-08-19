#include<stdio.h>
void main(){
  int gross;
  printf("Enter the gross sales: ");
  scanf("%d", &gross);
  printf("The net sales is %d", 0.9*gross);  
}
