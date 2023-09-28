#include<stdio.h>
int main()
{
char a,b;
printf("type a character");
a=getchar();
fflush(stdin);
printf("type another character:");
b=getchar();
if(a>b)
   {
      printf("'%c' is greater than '%c'!\n",a,b);
    }
else if(a<b)
{
printf("'%c' is samller than '%c'.\n",a,b);
}
else{
printf("dont type the same character twice.\n");
}
return(0);
}