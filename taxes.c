#include<stdio.h>
#include<stdlib.h>
int main()
{
char height[4],temp[4],favnum[5];
int tax1,tax2;
printf("enter your height");
gets(height);
printf("what temperature is outside?");
gets(temp);
printf("enter your favourite number:");
gets(favnum);
tax1=atoi(height)*atoi(favnum);
tax2=atoi(temp)*atoi(favnum);
if(tax1>tax2)
{
printf("you owe $%d in taxes.\n",tax1*10);
}
else
{
printf("you owe $%d in taxes.\n",tax2*10);
}
return(0);}