
#include<stdio.h>
int main()

{
	float price,discount,netp;

	printf ("Enter the price of the item:\n ");
	scanf ("%f", &price);

	if (price>1000)
	{
		discount=0.15*price;
	}
	netp=price-discount;
	printf("net price after dicount is %f" , netp);
	return 0;

}