#include<stdio.h>
int main()
{
int start;
printf("please enter a number to start.\n");
printf("the countdown(1to100):");
scanf("%d",&start);
do
{
printf("T-minus %d\n",start);
start--;
}
while(start>0);
printf("Zero!\nblast off!\n");
return(0);
}