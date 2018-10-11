#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,i,h,j,sum;
float o,p,q,r;
 
printf("Enter the five digit number\n");
scanf("%d",&a);
 
b=a%10;
c=a/10;
d=c%10;
e=c/10;
f=e%10;
g=e/10;
i=g%10;
j=g/10;
 
printf("%d%d%d%d%d\n",b,d,f,i,j);
 
sum=b+d+f+i+j;
printf("Sum of digits = %d",sum);
 
return 0;
}