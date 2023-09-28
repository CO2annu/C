#include<stdio.h>
int main()
{
char c,d;
printf("would you like your computer to explode?\n");
c=getchar();
d=getchar();

if (c=='y' && d=='Y')
{
printf("ok: configuring computer to explode now!.\n");
printf("bye!.\n");}
else
{
printf("okay.whew!.\n");
}
return(0);
}