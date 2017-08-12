#include<stdio.h>
void main()
{
  int num1,num2,num3;
   printf("enter three numbers num1\t num2\t num3\t");
   scanf("%d%d%d",&num1,&num2,&num3);
   if(num1>num2)
   {
     printf("%d",num1);
    }
    else if(num1>num3)
    {
     printf(""%d",&num1);
     }
     else
     {
     printf("%d",num2);
     }
  }
