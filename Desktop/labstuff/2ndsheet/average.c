#include <stdio.h>
int main()
{
      int a,b,c;
      float avg;
      printf("\tEnter Three Numbers\n");
      printf("--------------------------------\n");
      printf("Enter First Number  : ");
      scanf("%d", &a);
      printf("\nEnter Second Number : ");
      scanf("%d",&b);
      printf("\nEnter Third Number : ");
      scanf("%d",&c);
      printf("--------------------------------\n");
      /* To find average*/
      avg=a+b+c/3.0;
      printf("\nAverage of Three Numbers : %f",avg);
      return 0;
}