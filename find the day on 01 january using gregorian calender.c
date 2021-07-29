#include<stdio.h>
int main()
{
	int ref_year=1900,year,leap=0,diff,total_days=0,day=0;
	printf("\n Enter the year between 1900 and 2099=");
	scanf("%d",&year);
	
	diff=year-ref_year;
	while(ref_year<year)
	{
		if(ref_year%100==0)
		{
			if(ref_year%400==0)
			{
				leap++;
			}
			
		}
		ref_year++;
	}
	total_days=(diff-leap)*365+leap*366;
	day=total_days%7;
	
	printf("\n the day on 1 january %d was",year);
	
	switch(day)
	{
		case 0:printf("Monday.\n");
		break;
		
		case 1:printf("tuesday.\n");
		break;
		
		case 2:printf("wednesday.\n");
		break;
		
		case 3:printf("thursday.\n");
		break;
		
		case 4:printf("friday.\n");
		break;
		
		case 5:printf("saturdayday.\n");
		break;
		
		case 6:printf("sunday.\n");
		break;
	}
	return 0;
}
