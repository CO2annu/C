#include<stdio.h>
int main()
{
char c;
printf("would you like your computer to explode?\n");
c=getchar();
if (c='y' || c='Y')
{
printf("ok: configuring computer to explode now!.\n");
printf("bye!.\n");}
else
{
printf("okay.whew!.\n");
}
return(0);
}