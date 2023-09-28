#include<stdio.h>
#include<stdlib.h>
int main()
{
char num[2];
int number;
printf("i am your computer ginie.\n");
printf("Enter a number from 0 to 9:");
gets(num);
number=atoi(num);
if(number<5)
{
printf("that number is less than 5!\n");
}
if(number>5)
{
printf("that number is greater than 5!\n");
}
printf("the genie knows all,sees all!\n");
return(0);
}