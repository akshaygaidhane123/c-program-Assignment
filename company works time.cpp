#include<stdio.h>
int main()
{
    float hours;
    printf("Input the time taken by worker: ");
    scanf("%f", &hours);

    if(hours>=2 && hours<=3)
        printf("Worker is highly efficient");
    if(hours>3 && hours <=4)
        printf("Worker needs to improve speed");
    if(hours>4 && hours <=5)
        printf("Give training to worker");
    if(hours>5)
        printf("Worker is terminated");

    return(0);
}
