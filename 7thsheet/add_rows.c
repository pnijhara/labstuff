#include <stdio.h>
int main()
    {
	    int matrix[10][10];
	    int i,j,m,n;
	    int sum,product;
		
	    printf("Enter number of Rows :");
	    scanf("%d",&m);
	    printf("Enter number of Cols :");
	    scanf("%d",&n);
	
	    printf("\nEnter matrix elements :\n");
	    for(i=0;i< m;i++)
	    {
		    for(j=0;j< n;j++)
		    {
			    printf("Enter element [%d,%d] : ",i+1,j+1);
			    scanf("%d",&matrix[i][j]);
		    }
	    }
	    printf("\n");
	    for(i=0;i< m;i++)
	    {
		    sum=0;
		    for(j=0;j< n;j++)
		    {
			    printf("%d\t",matrix[i][j]);	
			    sum		+=	matrix[i][j];
		    }
		    printf("\tSUM : %d",sum);
		    printf("\n");		
	    }
	
    }