#include<stdio.h>
void main()
{
 int number;
 printf("enter any number");
 scanf("%d",&number);
 if(number<0)
 {
 printf("the number is negative");
 }
 else if(number==0)
 {
 printf("the number is equal to zero");
 }
 else 
 {
 printf("the number is positive");
 }
}
