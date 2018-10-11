#include<stdio.h>
int main()
{ 
int arr[100][100],n,i,j;
printf("enter the level upto which you want series to be printed \n");  
scanf("%d",&n);
printf("\n");
for (i = 0; i < n; i++) 
{ 
    for (j = 0; j<= i ;j++) 
    { 
    if (i==j || j == 0) 
        arr[i][j] = 1; 
    else 
        arr[i][j] = arr[i-1][j-1] + arr[i-1][j]; 
    printf("%d ", arr[i][j]); 
    } 
    printf("\n"); 
} 
return 0;
}