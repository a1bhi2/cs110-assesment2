#include<stdio.h>

void main()
{
int q,M,Y;
scanf("%d",&q);
scanf("%d",&M);
scanf("%d",&Y);
int m,y;

if(M==1||M==2){
m=M+12;
	y=Y-1;
}
int h;
h=(q+((13*(m+1)))/5+y+(y/4)-(y/100)+(y/400))%7;

printf("Date %d-%d-%d is weekday %d",q,M,Y,h);
}
