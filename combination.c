#include<stdio.h>
#include<stdlib.h>
int main()
{
char num[2];
int number;
printf("Entera number from 0 to 9!.\n");
gets(num);
number=atoi(num);
if(number<5)
{
printf("that number is less than 5!.\n");
}
else if(number==5){
printf("you typed in 5!.\n");}
else{
printf("that number is more than 5!.\n");
}
printf("see i know all");
return(0);
}
