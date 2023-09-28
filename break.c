#include<stdio.h>
int main()
{
char ch;
puts("start typing");
puts("press ~ then enter to stop");
for(;;)
{
ch=getchar();
if(ch=='~')
{
break;
}
}
return(0);
}