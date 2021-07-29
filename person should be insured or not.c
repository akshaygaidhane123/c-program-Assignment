#include<stdio.h>
int main()
{
    int age,premium,m;
    char health,location,sex;
    printf("\n enter health,age,location & gender of a person-");
    scanf("%c%d%c%c",&health,&age,&location,&sex);
    if((health=='e')&&(age>=25&&age<=35)&&(location=='c')&&(sex=='m'))
    {
        printf("\n premium Rs. 4 per thousand and policy amount cannot exceed 2 lakhs");
    }
    else if((health=='e')&&(age>=25&&age<=35)&&(location=='c')&&(sex=='f'))
    {
        printf("\n premium Rs. 3 per thousand and policy amount cannot exceed 1 lakhs");
    }
    else if((health=='p')&&(age>=25&&age<=35)&&(location=='v')&&(sex=='m'))
    {
        printf("\n premium Rs.6 per thousand and policy amount cannot exceed 10,000 lakhs");
    }
    else
        printf("\n person is not insured");
}
