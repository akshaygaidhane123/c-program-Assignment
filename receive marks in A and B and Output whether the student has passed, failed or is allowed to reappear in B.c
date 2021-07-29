#include<stdio.h>
int main()
{
int pera,perb;

printf("Enter percentage of A and B: ");
scanf("%d%d",&pera,&perb);

if(pera>=55&&perb>=45)
printf("\n Student is passed");

else if(pera>=45&&pera<55&&perb>=55)
printf("\n Student is passed");

else if(perb<45&&pera>=65)
printf("Student is allowed to reappear in an exam");

else
printf("Student is failed");


return 0;
}
