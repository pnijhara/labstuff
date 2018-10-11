#include <stdio.h>
int main()
{
	int i,j,k;
	char str1[30],str2[10],str3[20];
	printf("enter first, middle, last name");
	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%s",str3);
	for (i=0;str1[i];i++)
	{
		printf("%c",str1[i]);
	}
	for (j=0;str2[j];j++)
	{
		printf("%c",str2[j]);
	}
	for (k=0;str3[k];k++)
	{
		printf("%c",str3[k]);
	}
	return 0;
}