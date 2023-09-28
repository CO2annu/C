#include<stdio.h>
#include<stdlib.h>
int main()
{
int height=152;
int temp=40;
char input[4];
int Height;
int Temp;
printf("what is your height in cm.\n");
gets(input);
Height=atoi(input);
printf("what is the temperature outside.\n");
gets(input);
Temp=atoi(input);
if(Height>height){
printf("you have pay more tax");}
if(Height<height){
printf("you have pay less tax");}
if(Temp>temp)
{
printf("you have to pay more tax");}
if(Temp<temp)
{
printf("you have to pay less tax");}
return(0);
}