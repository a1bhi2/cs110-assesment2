#include<stdio.h>

void main()
{	
	int m=0,n=1,mo,month;
	printf("\nEnter the month to find the rabbit population on the first day of that month ");
	scanf("%d",&month);
	for(int i=2;i<=month;i++)
	{	mo=m;	
		m=m+n;
		n=mo;
	}
 printf("\nNumber of mature pair = %d and newborn %d \n total population is %d \n",m,n,m+n);
}
