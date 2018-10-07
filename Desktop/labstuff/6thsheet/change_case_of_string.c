#include<stdio.h>
#include<string.h>
int main()
{
  char str[20];
  int i , n;
  printf("Enter any string:");
  scanf("%[^\n]%*c",str);
  for(i = 0; str[i] != '\0'; i++);
  {
            n++;
  }  
  for(i=0;i<=n;i++)      
  {
            if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
            else
            str[i]=str[i]+32;
  }
  printf("Proper capitalisation is of great importance\n");    
  printf("%s\n",str);
  return 0;
}