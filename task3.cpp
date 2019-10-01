#include <stdio.h>
int main()
{
          int a,b,c;
          float f,g;
          printf("Enter the Marks Subject maths = ");
          scanf("%d",&a);
          printf("Enter the Marks Subject hindi = ");
          scanf("%d",&b);
         
          printf("Enter the Marks Subject english = ");
          scanf("%d",&c);

          f=a+b+c;
          g=f/3;
          printf("\nTotal Marks = %f ",f);
          printf("\nAverage Marks = %f",g);
  
          return 0;
}


