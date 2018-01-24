#include<stdio.h>

void main()
{
	int d,m,y,days=0,b=0;
	scanf("%d",&d);
	scanf("%d",&m);
	scanf("%d",&y);
	int a=2001;
	

	
	while(y!=a){
		
	if(a%4==0){
			days=days+366;
		}
	else{
		days=days+365;
		}
	
	a++;
	}
	if(y==a)
		{
			if(m==3||m==5||m==7||m==8||m==10||m==12)
				{ if(y%4==0)
					{days=days+29+(m/2)*31+((m-2)/2)*30;}
				else
					{days=days+28+(m/2)*31+((m-2)/2)*30;}
				}
			else if(m==2||m==4||m==6||m==9||m==11)
				{ if(y%4==0)
					{days=days+29+(m/2)*31+((m-2)/2)*30;}
				else
					{days=days+28+(m/2)*31+((m-2)/2)*30;}
				}
		
	days=days+d;
		}



int c=0;
	if(days>7){
	 c=days%7;}
	else { c=d;}
printf("\n weedday is %d ",c);
switch(c)
{
	case 1: printf("Monday");break;
	case 2: printf("Tuesday");break;
	case 3: printf("Wendsday");break;
	case 4: printf("Thrusday");break;
	case 5: printf("Friday");break;
	case 6: printf("Saturday");break;
	case 7: printf("Sunday");break;
}
}
	
			
			
	
		
	
	
	

